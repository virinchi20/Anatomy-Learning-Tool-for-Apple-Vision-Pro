using System.Collections;
using System.Collections.Generic;
using InputSupport;
using TMPro;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Interactables;

public class RecordPoke : XRBaseInteractable
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
    
    [Header("Heart Part References")]
    [SerializeField] private GameObject leftVentricle; // Left ventricle object
    [SerializeField] private GameObject rightVentricle; // Right ventricle object
    [SerializeField] private GameObject leftAtrium; // Left atrium object
    [SerializeField] private GameObject rightAtrium; // Right atrium object
    
    [Header("Tooltip References")]
    [SerializeField] private GameObject leftVentricleTooltip; // Left ventricle tooltip
    [SerializeField] private GameObject rightVentricleTooltip; // Right ventricle tooltip
    [SerializeField] private GameObject leftAtriumTooltip; // Left atrium tooltip
    [SerializeField] private GameObject rightAtriumTooltip; // Right atrium tooltip
    [SerializeField] private GameObject heartTooltip; // General heart tooltip
    
    [Header("Additional Objects")]
    [SerializeField] private GameObject parentObject; // Reference to CardioVascular41
    [SerializeField] private List<GameObject> additionalObjectsTooltips = new List<GameObject>(); // Additional tooltips
    
    [Header("Color Settings")]
    [SerializeField] private Color recordingColor = Color.red; // Color during recording
    [SerializeField] private Renderer targetRenderer; // Renderer of the current GameObject
    
    [SerializeField] private bool debugMode = false;
    
    private AudioClip clip;
    private bool isRecording = false;
    private bool isProcessing = false;
    private string microphoneDevice;
    private Color originalColor; // Store the original color
    
    // Dictionary to store additional objects and their tooltips
    private Dictionary<string, GameObject> tooltipMap = new Dictionary<string, GameObject>();
    
    protected override void Awake()
    {
        base.Awake();
        
        // Set initial text
        if (message != null)
            message.text = recordText;
        
        // Hide all tooltips initially
        HideAllTooltips();
        
        // Initialize tooltip map
        InitializeTooltipMap();
            
        // If no target renderer is set, try to get it from this gameObject
        if (targetRenderer == null)
            targetRenderer = GetComponent<Renderer>();
            
        // Store the original color if renderer is assigned
        if (targetRenderer != null)
            originalColor = targetRenderer.material.color;
            
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
    
    // Initialize the map of keyword to tooltip objects
    private void InitializeTooltipMap()
    {
        // Main heart parts
        if (leftVentricleTooltip != null)
            tooltipMap["left ventricle"] = leftVentricleTooltip;
            
        if (rightVentricleTooltip != null)
            tooltipMap["right ventricle"] = rightVentricleTooltip;
            
        if (leftAtriumTooltip != null)
            tooltipMap["left atrium"] = leftAtriumTooltip;
            
        if (rightAtriumTooltip != null)
            tooltipMap["right atrium"] = rightAtriumTooltip;
            
        if (heartTooltip != null)
            tooltipMap["heart"] = heartTooltip;
            
        // Add any additional tooltips with their keywords (using object name as default)
        foreach (var tooltip in additionalObjectsTooltips)
        {
            if (tooltip != null)
            {
                string keyword = tooltip.name.ToLower();
                tooltipMap[keyword] = tooltip;
                if (debugMode)
                    Debug.Log($"Added tooltip for keyword: {keyword}");
            }
        }
    }
    
    protected override void OnEnable()
    {
        base.OnEnable();
        if (debugMode)
            Debug.Log("RecordPoke enabled");
        
        // Hide all tooltips when component is enabled
        HideAllTooltips();
            
        // Reset color when enabled
        if (targetRenderer != null)
            targetRenderer.material.color = originalColor;
    }

    protected override void OnSelectEntered(SelectEnterEventArgs args)
    {
        base.OnSelectEntered(args);
        
        if (isProcessing)
            return;
            
        if (isRecording)
        {
            ChangeColor(originalColor);
            StopRecording();
        }
        else
        {
            // Always hide all tooltips before starting a new recording
            HideAllTooltips();
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
        
        // Change color to red when recording
        ChangeColor(recordingColor);
        
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
                    
                    // Process the transcription to show tooltips
                    ProcessTranscriptionAndShowTooltips(result.ToLower());
                    
                    // Speak the result if TTS is enabled
                    if (enableTTS && ttsProcessor != null && ttsProcessor.IsInitialized && !string.IsNullOrEmpty(result))
                    {
                        StartCoroutine(SpeakAfterDelay(result));
                    }
                    else
                    {
                        // No TTS, reset UI immediately
                        ResetUI();
                    
                        // Reset color back to original
                        ChangeColor(originalColor);
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
            
            // Reset color in case of error
            ChangeColor(originalColor);
            
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
                
                // Reset color back to original
                ChangeColor(originalColor);
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
    
    // Process transcription and show tooltips based on keywords
    private void ProcessTranscriptionAndShowTooltips(string transcriptionText)
    {
        if (string.IsNullOrEmpty(transcriptionText))
            return;
            
        // Check for reset keyword
        bool containsReset = transcriptionText.Contains("reset");
        
        // If reset is mentioned, hide all tooltips
        if (containsReset)
        {
            HideAllTooltips();
            if (debugMode)
                Debug.Log("Hiding all tooltips based on keyword 'reset'");
            return;
        }
        
        // Check for general categories first
        bool containsVentricle = transcriptionText.Contains("ventricle");
        bool containsAtrium = transcriptionText.Contains("atrium") || transcriptionText.Contains("atria");
        
        // Show group tooltips first if general terms are used
        if (containsVentricle)
        {
            // Show both ventricle tooltips if not specifically mentioned
            if (!transcriptionText.Contains("left ventricle") && !transcriptionText.Contains("right ventricle"))
            {
                ShowTooltip(leftVentricleTooltip);
                ShowTooltip(rightVentricleTooltip);
                if (debugMode)
                    Debug.Log("Showing both ventricle tooltips based on general 'ventricle' keyword");
            }
        }
        
        if (containsAtrium)
        {
            // Show both atria tooltips if not specifically mentioned
            if (!transcriptionText.Contains("left atrium") && !transcriptionText.Contains("right atrium"))
            {
                ShowTooltip(leftAtriumTooltip);
                ShowTooltip(rightAtriumTooltip);
                if (debugMode)
                    Debug.Log("Showing both atrium tooltips based on general 'atrium/atria' keyword");
            }
        }
        
        // Check for exact keyword matches in our tooltip map
        foreach (var entry in tooltipMap)
        {
            string keyword = entry.Key;
            GameObject tooltip = entry.Value;
            
            if (transcriptionText.Contains(keyword))
            {
                ShowTooltip(tooltip);
                if (debugMode)
                    Debug.Log($"Showing tooltip for '{keyword}' based on keyword match");
            }
        }
        
        // If the word "heart" is mentioned without specifics, show all heart-related tooltips
        if (transcriptionText.Contains("heart") && 
            !containsVentricle && !containsAtrium &&
            !transcriptionText.Contains("left") && !transcriptionText.Contains("right"))
        {
            ShowTooltip(heartTooltip);
            if (debugMode)
                Debug.Log("Showing general heart tooltip based on 'heart' keyword");
        }
    }
    
    // Show a specific tooltip
    private void ShowTooltip(GameObject tooltip)
    {
        if (tooltip != null)
        {
            tooltip.SetActive(true);
            if (debugMode)
                Debug.Log($"Activated tooltip: {tooltip.name}");
        }
    }
    
    // Hide a specific tooltip
    private void HideTooltip(GameObject tooltip)
    {
        if (tooltip != null)
        {
            tooltip.SetActive(false);
            if (debugMode)
                Debug.Log($"Deactivated tooltip: {tooltip.name}");
        }
    }
    
    // Hide all tooltips
    private void HideAllTooltips()
    {
        HideTooltip(leftVentricleTooltip);
        HideTooltip(rightVentricleTooltip);
        HideTooltip(leftAtriumTooltip);
        HideTooltip(rightAtriumTooltip);
        HideTooltip(heartTooltip);
        
        // Hide all additional tooltips
        foreach (var tooltip in additionalObjectsTooltips)
        {
            HideTooltip(tooltip);
        }
        
        if (debugMode)
            Debug.Log("Hiding all tooltips");
    }
    
    // Color change method
    private void ChangeColor(Color newColor)
    {
        if (targetRenderer == null)
            return;
            
        targetRenderer.material.color = newColor;
    }
}