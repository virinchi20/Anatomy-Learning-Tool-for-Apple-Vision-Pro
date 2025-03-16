using System;
using System.IO;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Networking;

/// <summary>
/// WhisperSharp - A Unity wrapper for the Whisper.cpp library
/// This implementation allows integrating OpenAI's Whisper model directly in Unity
/// for local speech-to-text processing without requiring external API calls.
/// </summary>
public class WhisperSharp : MonoBehaviour
{
    [Header("Model Settings")]
    [Tooltip("Path to the Whisper model relative to StreamingAssets folder")]
    [SerializeField] private string modelPath = "whisper-models/ggml-tiny.en.bin";
    
    [Tooltip("Language code (leave empty for auto-detection)")]
    [SerializeField] private string languageCode = "en";
    
    [Tooltip("Enable translation to English")]
    [SerializeField] private bool translateToEnglish = false;

    [Header("Processing Settings")]
    [Tooltip("Number of processing threads")]
    [Range(1, 8)]
    [SerializeField] private int threads = 2;
    
    [Tooltip("Beam size for decoding")]
    [Range(1, 5)]
    [SerializeField] private int beamSize = 3;

    // Static flag to track initialization status
    private static bool isInitialized = false;
    private static bool isModelLoaded = false;
    private static IntPtr contextPtr = IntPtr.Zero;

    // Delegate for the transcription completion callback
    public delegate void TranscriptionCallback(string text, float confidence);
    
    // Event that is triggered when transcription is complete
    public event TranscriptionCallback OnTranscriptionComplete;

    private void Awake()
    {
        InitializeWhisper();
    }

    /// <summary>
    /// Initialize the Whisper library
    /// </summary>
    public void InitializeWhisper()
    {
        if (isInitialized)
            return;

        try
        {
            Debug.Log("Initializing WhisperSharp...");
            
            // Load the appropriate native library based on platform
#if UNITY_EDITOR_WIN || UNITY_STANDALONE_WIN
            LoadNativeLibrary("whisper_windows_x64");
#elif UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX
            LoadNativeLibrary("whisper_macos");
#elif UNITY_IOS
            // iOS integration would be handled differently
            Debug.Log("iOS integration requires platform-specific implementation");
#else
            Debug.LogError("Platform not supported for WhisperSharp");
            return;
#endif
            
            // Check if initialization was successful
            if (NativeInitialize() != 0)
            {
                Debug.LogError("Failed to initialize Whisper library");
                return;
            }
            
            isInitialized = true;
            Debug.Log("WhisperSharp initialized successfully");
            
            // Start coroutine to load the model
            StartCoroutine(LoadModel());
        }
        catch (Exception e)
        {
            Debug.LogError($"Error initializing WhisperSharp: {e.Message}");
        }
    }

    /// <summary>
    /// Load the Whisper model
    /// </summary>
    private IEnumerator LoadModel()
    {
        if (isModelLoaded)
            yield break;
            
        Debug.Log($"Loading Whisper model: {modelPath}");
        
        // Build the full path to the model
        string fullPath = Path.Combine(Application.streamingAssetsPath, modelPath);
        
        // If on Windows, handle file:// protocol
        if (fullPath.StartsWith("file://"))
        {
            using (UnityWebRequest www = UnityWebRequest.Get(fullPath))
            {
                yield return www.SendWebRequest();
                
                if (www.result != UnityWebRequest.Result.Success)
                {
                    Debug.LogError($"Failed to load model: {www.error}");
                    yield break;
                }
                
                // Save the model to a temporary path
                string tempPath = Path.Combine(Application.temporaryCachePath, "whisper_model.bin");
                File.WriteAllBytes(tempPath, www.downloadHandler.data);
                fullPath = tempPath;
            }
        }
        
        // Load the model
        contextPtr = NativeLoadModel(fullPath, threads);
        
        if (contextPtr == IntPtr.Zero)
        {
            Debug.LogError("Failed to load Whisper model");
            yield break;
        }
        
        isModelLoaded = true;
        Debug.Log("Whisper model loaded successfully");
    }

    /// <summary>
    /// Transcribe an audio clip using Whisper
    /// </summary>
    /// <param name="clip">The audio clip to transcribe</param>
    public IEnumerator TranscribeAudio(AudioClip clip)
    {
        if (!isInitialized || !isModelLoaded)
        {
            Debug.LogError("WhisperSharp not initialized or model not loaded");
            yield break;
        }
        
        Debug.Log("Starting transcription...");
        
        // Convert the AudioClip to a float array
        float[] samples = new float[clip.samples * clip.channels];
        clip.GetData(samples, 0);
        
        // Convert stereo to mono if needed
        float[] monoSamples = clip.channels > 1 ? StereoToMono(samples, clip.channels) : samples;
        
        // Check if we need to convert the sample rate
        if (clip.frequency != 16000)
        {
            Debug.Log($"Resampling from {clip.frequency}Hz to 16000Hz");
            monoSamples = ResampleAudio(monoSamples, clip.frequency, 16000);
        }
        
        // Allocate memory for the audio data
        IntPtr audioPtr = Marshal.AllocHGlobal(monoSamples.Length * sizeof(float));
        Marshal.Copy(monoSamples, 0, audioPtr, monoSamples.Length);
        
        // Set up the parameters for transcription
        WhisperParams parameters = new WhisperParams
        {
            language = string.IsNullOrEmpty(languageCode) ? IntPtr.Zero : Marshal.StringToHGlobalAnsi(languageCode),
            translate = translateToEnglish ? 1 : 0,
            beam_size = beamSize,
            audio_ctx = 0  // Use default audio context size
        };
        
        // Perform the transcription
        IntPtr resultPtr = NativeTranscribe(contextPtr, audioPtr, monoSamples.Length, parameters);
        
        // Clean up
        Marshal.FreeHGlobal(audioPtr);
        if (parameters.language != IntPtr.Zero)
            Marshal.FreeHGlobal(parameters.language);
        
        // Check if transcription was successful
        if (resultPtr == IntPtr.Zero)
        {
            Debug.LogError("Transcription failed");
            yield break;
        }
        
        // Get the transcription text
        string transcription = Marshal.PtrToStringAnsi(resultPtr);
        float confidence = NativeGetConfidence(contextPtr);
        
        Debug.Log($"Transcription completed with confidence {confidence}: {transcription}");
        
        // Trigger the callback
        OnTranscriptionComplete?.Invoke(transcription, confidence);
        
        // Free the result
        NativeFreeResult(resultPtr);
    }

    /// <summary>
    /// Convert stereo audio to mono
    /// </summary>
    private float[] StereoToMono(float[] stereoSamples, int channels)
    {
        int monoLength = stereoSamples.Length / channels;
        float[] monoSamples = new float[monoLength];
        
        for (int i = 0; i < monoLength; i++)
        {
            float sum = 0f;
            for (int c = 0; c < channels; c++)
            {
                sum += stereoSamples[i * channels + c];
            }
            monoSamples[i] = sum / channels;
        }
        
        return monoSamples;
    }

    /// <summary>
    /// Resample audio to a different sample rate
    /// </summary>
    private float[] ResampleAudio(float[] input, int inputSampleRate, int outputSampleRate)
    {
        // Simple linear resampling - for production use a better algorithm
        float ratio = (float)inputSampleRate / outputSampleRate;
        int outputLength = Mathf.CeilToInt(input.Length / ratio);
        float[] output = new float[outputLength];
        
        for (int i = 0; i < outputLength; i++)
        {
            float position = i * ratio;
            int index = Mathf.FloorToInt(position);
            float fraction = position - index;
            
            if (index + 1 < input.Length)
            {
                output[i] = input[index] * (1 - fraction) + input[index + 1] * fraction;
            }
            else
            {
                output[i] = input[index];
            }
        }
        
        return output;
    }

    private void OnDestroy()
    {
        // Clean up resources
        if (isModelLoaded && contextPtr != IntPtr.Zero)
        {
            NativeFreeModel(contextPtr);
            contextPtr = IntPtr.Zero;
            isModelLoaded = false;
        }
        
        if (isInitialized)
        {
            NativeShutdown();
            isInitialized = false;
        }
    }

    /// <summary>
    /// Load the appropriate native library for the current platform
    /// </summary>
    private void LoadNativeLibrary(string libraryName)
    {
        Debug.Log($"Loading native library: {libraryName}");
        // In a real implementation, you would use DllImport attribute with the library name
    }

    #region Native Methods
    // These would be implemented as actual DllImport methods in a real implementation
    
    // Initialize the Whisper library
    private int NativeInitialize()
    {
        // Placeholder for actual native call
        Debug.Log("Native Initialize called");
        return 0;
    }
    
    // Load a Whisper model
    private IntPtr NativeLoadModel(string path, int threads)
    {
        // Placeholder for actual native call
        Debug.Log($"Native LoadModel called: {path}, threads: {threads}");
        return new IntPtr(1);  // Return non-zero to simulate success
    }
    
    // Transcribe audio data
    private IntPtr NativeTranscribe(IntPtr context, IntPtr audioData, int audioLength, WhisperParams parameters)
    {
        // Placeholder for actual native call
        Debug.Log("Native Transcribe called");
        // Returning a fake result for demo purposes
        string fakeResult = "This is a simulated transcription result.";
        IntPtr resultPtr = Marshal.StringToHGlobalAnsi(fakeResult);
        return resultPtr;
    }
    
    // Get the confidence score of the last transcription
    private float NativeGetConfidence(IntPtr context)
    {
        // Placeholder for actual native call
        return 0.85f;  // Simulated confidence score
    }
    
    // Free a result string
    private void NativeFreeResult(IntPtr result)
    {
        // Placeholder for actual native call
        Marshal.FreeHGlobal(result);
    }
    
    // Free a model
    private void NativeFreeModel(IntPtr context)
    {
        // Placeholder for actual native call
        Debug.Log("Native FreeModel called");
    }
    
    // Shut down the Whisper library
    private void NativeShutdown()
    {
        // Placeholder for actual native call
        Debug.Log("Native Shutdown called");
    }
    #endregion

    /// <summary>
    /// Parameters for Whisper transcription
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    private struct WhisperParams
    {
        public IntPtr language;    // Language code as C string
        public int translate;      // Translate to English
        public int beam_size;      // Beam size for beam search
        public int audio_ctx;      // Audio context size
    }
}