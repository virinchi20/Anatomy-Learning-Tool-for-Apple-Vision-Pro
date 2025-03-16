using InputSupport;
using TMPro;
using UnityEngine;
using Samples.Whisper;
using System.Collections;

public class TouchableButton : TouchableBase
{
    [SerializeField] private TextMeshPro message;
    [SerializeField] private string recordText = "Record";
    [SerializeField] private string recordingText = "Stop";
    [SerializeField] private string processingText = "Processing...";
    [SerializeField] private int duration = 10; // Recording duration in seconds
    [SerializeField] private TextMeshPro transcription;
    [SerializeField] private AudioSource feedbackAudio; // Optional for UI feedback
    
    [Header("Whisper Settings")]
    [SerializeField] private WhisperServerProcessor whisperProcessor;
    
    [Header("TTS Settings")]
    [SerializeField] private bool enableTTS = true;
    [SerializeField] private ServerTTSProcessor ttsProcessor;
    [SerializeField] private float delayBeforeTTS = 0.5f; // Short delay before speaking
    
    [SerializeField] private bool debugMode = false;
    
    private AudioClip clip;
    private bool isRecording = false;
    private bool isProcessing = false;
    private string microphoneDevice;
    
    protected override void Awake()
    {
        base.Awake();
        
        // Set initial text
        if (message != null)
            message.text = recordText;
            
        // Find or add WhisperServerProcessor if not set
        if (whisperProcessor == null)
        {
            whisperProcessor = FindObjectOfType<WhisperServerProcessor>();
            if (whisperProcessor == null && GameObject.Find("WhisperProcessor") != null)
            {
                whisperProcessor = GameObject.Find("WhisperProcessor").GetComponent<WhisperServerProcessor>();
            }
            
            if (whisperProcessor == null)
            {
                GameObject processorObj = new GameObject("WhisperProcessor");
                whisperProcessor = processorObj.AddComponent<WhisperServerProcessor>();
            }
        }
        
        // Find or add TTSProcessor if not set
        if (ttsProcessor == null && enableTTS)
        {
            ttsProcessor = FindObjectOfType<ServerTTSProcessor>();
            if (ttsProcessor == null && GameObject.Find("TTSProcessor") != null)
            {
                ttsProcessor = GameObject.Find("TTSProcessor").GetComponent<ServerTTSProcessor>();
            }
            
            if (ttsProcessor == null)
            {
                GameObject ttsObj = new GameObject("TTSProcessor");
                ttsProcessor = ttsObj.AddComponent<ServerTTSProcessor>();
            }
        }
        
        // Check microphone availability
        if (Microphone.devices.Length > 0)
        {
            microphoneDevice = Microphone.devices[0];
            if (debugMode)
                Debug.Log($"Using microphone: {microphoneDevice}");
        }
        else
        {
            Debug.LogWarning("No microphone detected!");
            if (message != null)
                message.text = "No Mic!";
        }
    }
    
    // Override this method to toggle recording
    protected override void OnTouch()
    {
        if (isProcessing)
            return;
            
        if (isRecording)
        {
            StopRecording();
        }
        else
        {
            StartRecording();
        }
    }
    
    private void StartRecording()
    {
        // Stop any ongoing TTS
        if (enableTTS && ttsProcessor != null)
        {
            ttsProcessor.StopSpeaking();
        }
        
        if (isRecording || microphoneDevice == null)
            return;
            
        // Play feedback sound (optional)
        if (feedbackAudio != null)
            feedbackAudio.Play();
        
        // Update UI
        isRecording = true;
        if (message != null)
        {
            message.text = recordingText;
            message.fontSize = 12f;
        }

        if (transcription != null)
        {
            transcription.text = "Recording...";
        }
        
        // Start microphone recording
        #if !UNITY_WEBGL
        clip = Microphone.Start(microphoneDevice, false, duration, 44100);
        #endif
        
        if (debugMode)
            Debug.Log("Started recording audio");
    }

    private void StopRecording()
    {
        if (!isRecording)
            return;
            
        // Play feedback sound (optional)
        if (feedbackAudio != null)
            feedbackAudio.Play();
        
        // Update UI
        isRecording = false;
        isProcessing = true;
        
        if (message != null)
        {
            message.text = processingText;
            message.fontSize = 12f;
        }

        if (transcription != null)
        {
            transcription.text = "Processing...";
        }
        
        // Stop microphone recording
        #if !UNITY_WEBGL
        Microphone.End(microphoneDevice);
        #endif
        
        if (debugMode)
            Debug.Log("Stopped recording audio");
        
        if (clip == null)
        {
            if (transcription != null)
            {
                transcription.text = "Recording failed!";
            }
            
            // Reset UI
            if (message != null)
            {
                message.text = recordText;
                message.fontSize = 16f;
            }
            
            isProcessing = false;
            return;
        }
        
        // Process with Whisper server
        if (whisperProcessor != null && whisperProcessor.IsInitialized)
        {
            whisperProcessor.ProcessAudio(
                clip,
                (result) => {
                    // Success callback
                    if (transcription != null)
                    {
                        transcription.text = result;
                    }
                    
                    // Speak the result if TTS is enabled
                    if (enableTTS && ttsProcessor != null && ttsProcessor.IsInitialized && !string.IsNullOrEmpty(result))
                    {
                        StartCoroutine(SpeakAfterDelay(result));
                    }
                    else
                    {
                        // No TTS, reset UI immediately
                        ResetUI();
                    }
                },
                (error) => {
                    // Error callback
                    if (transcription != null)
                    {
                        transcription.text = error;
                    }
                    
                    // Reset UI
                    ResetUI();
                    
                    if (debugMode)
                        Debug.LogError($"Transcription error: {error}");
                }
            );
        }
        else
        {
            if (transcription != null)
            {
                transcription.text = "Whisper processor not initialized";
            }
            
            // Reset UI
            ResetUI();
            
            if (debugMode)
                Debug.LogError("Whisper processor not initialized");
        }
    }
    
    private IEnumerator SpeakAfterDelay(string text)
    {
        if (delayBeforeTTS > 0)
            yield return new WaitForSeconds(delayBeforeTTS);
            
        ttsProcessor.Speak(
            text,
            () => {
                // Speech completed
                ResetUI();
            },
            (error) => {
                // Speech error
                if (debugMode)
                    Debug.LogError($"TTS error: {error}");
                    
                ResetUI();
            }
        );
    }
    
    private void ResetUI()
    {
        // Reset UI state
        if (message != null)
        {
            message.text = recordText;
            message.fontSize = 16f;
        }
        
        isProcessing = false;
    }
}