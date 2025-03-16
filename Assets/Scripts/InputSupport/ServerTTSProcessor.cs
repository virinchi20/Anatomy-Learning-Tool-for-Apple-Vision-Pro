using System;
using System.Collections;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;

namespace InputSupport
{
    public class ServerTTSProcessor : MonoBehaviour
    {
        [SerializeField] private string serverUrl = "http://localhost:5000/synthesize";
        [SerializeField] private AudioSource audioSource;
        [SerializeField] private bool debugMode = false;
        
        private bool isInitialized = false;
        public bool IsInitialized => isInitialized;
        
        private void Awake()
        {
            if (audioSource == null)
            {
                audioSource = gameObject.AddComponent<AudioSource>();
            }
            
            // Check server health on startup
            StartCoroutine(CheckServerHealth());
        }
        
        private IEnumerator CheckServerHealth()
        {
            string healthUrl = serverUrl.Substring(0, serverUrl.LastIndexOf('/')) + "/health";
            using (UnityWebRequest www = UnityWebRequest.Get(healthUrl))
            {
                yield return www.SendWebRequest();
                
                if (www.result == UnityWebRequest.Result.Success)
                {
                    isInitialized = true;
                    if (debugMode)
                        Debug.Log("TTS server is online and healthy");
                }
                else
                {
                    isInitialized = false;
                    Debug.LogWarning($"TTS server health check failed: {www.error}");
                }
            }
        }
        
        public void Speak(string text, Action onComplete = null, Action<string> onError = null)
        {
            if (string.IsNullOrEmpty(text))
            {
                onError?.Invoke("Empty text provided");
                return;
            }
            
            if (!isInitialized)
            {
                onError?.Invoke("TTS server not initialized");
                return;
            }
            
            StartCoroutine(SpeakCoroutine(text, onComplete, onError));
        }
        
        private IEnumerator SpeakCoroutine(string text, Action onComplete, Action<string> onError)
        {
            if (debugMode)
                Debug.Log($"Sending text to TTS server: {text}");
            
            // Create the JSON payload - escape quotes in the text
            string escapedText = text.Replace("\"", "\\\"").Replace("\n", " ");
            string jsonPayload = $"{{\"text\":\"{escapedText}\"}}";
            byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonPayload);
            
            // Create request
            using (UnityWebRequest www = new UnityWebRequest(serverUrl, "POST"))
            {
                www.uploadHandler = new UploadHandlerRaw(bodyRaw);
                www.downloadHandler = new DownloadHandlerAudioClip(serverUrl, AudioType.WAV);
                www.SetRequestHeader("Content-Type", "application/json");
                www.timeout = 30; // Longer timeout for TTS
                
                // Send the request
                yield return www.SendWebRequest();
                
                if (www.result == UnityWebRequest.Result.Success)
                {
                    // Get the audio clip
                    AudioClip clip = DownloadHandlerAudioClip.GetContent(www);
                    
                    if (clip != null)
                    {
                        if (debugMode)
                            Debug.Log($"Playing TTS audio (length: {clip.length}s)");
                        
                        // Stop any currently playing audio
                        audioSource.Stop();
                        
                        // Play the audio
                        audioSource.clip = clip;
                        audioSource.Play();
                        
                        // Wait until the audio finishes playing
                        float waitTime = clip.length + 0.1f; // Add a small buffer
                        yield return new WaitForSeconds(waitTime);
                        
                        onComplete?.Invoke();
                    }
                    else
                    {
                        if (debugMode)
                            Debug.LogError("Failed to download audio clip");
                        
                        onError?.Invoke("Failed to download audio clip");
                    }
                }
                else
                {
                    Debug.LogError($"Error from TTS server: {www.error}");
                    onError?.Invoke($"Server error: {www.error}");
                }
            }
        }
        
        public void StopSpeaking()
        {
            if (audioSource != null && audioSource.isPlaying)
            {
                audioSource.Stop();
            }
        }
    }
}