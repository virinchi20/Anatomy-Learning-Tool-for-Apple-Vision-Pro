using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using TMPro;

namespace InputSupport
{
    public class WhisperServerProcessor : MonoBehaviour
    {
        [SerializeField] private string serverUrl = "http://localhost:5000/transcribe";
        [SerializeField] private TextMeshPro statusText;
        [SerializeField] private bool debugMode = false;
        
        public bool IsInitialized { get; private set; } = true;
        
        void Awake()
        {
            if (debugMode)
                Debug.Log("WhisperServerProcessor initialized");
        }
        
        public void ProcessAudio(AudioClip audioClip, Action<string> onTranscriptionComplete, Action<string> onError)
        {
            if (audioClip == null)
            {
                onError?.Invoke("Audio clip is null");
                return;
            }
            
            StartCoroutine(ProcessAudioCoroutine(audioClip, onTranscriptionComplete, onError));
        }
        
        private IEnumerator ProcessAudioCoroutine(AudioClip audioClip, Action<string> onTranscriptionComplete, Action<string> onError)
        {
            if (debugMode)
                Debug.Log("Converting audio clip to WAV format");
            
            // Convert AudioClip to WAV format
            byte[] wavData = null;
            try
            {
                wavData = SaveWav.Save("temp.wav", audioClip);
                
                if (debugMode)
                    Debug.Log($"Audio converted to WAV: {wavData.Length} bytes");
            }
            catch (Exception e)
            {
                Debug.LogError($"Error converting audio to WAV: {e.Message}");
                onError?.Invoke($"Error converting audio: {e.Message}");
                yield break;
            }
            
            // Create form and send request
            WWWForm form = new WWWForm();
            form.AddBinaryData("audio", wavData, "audio.wav", "audio/wav");
            
            if (debugMode)
                Debug.Log($"Sending audio to server: {serverUrl}");
            
            // Send to server
            UnityWebRequest www = UnityWebRequest.Post(serverUrl, form);
            www.timeout = 10; // Set a reasonable timeout (10 seconds)
            
            // Send the request
            yield return www.SendWebRequest();
            
            // Process the response
            if (www.result == UnityWebRequest.Result.Success)
            {
                try
                {
                    // Parse the JSON response
                    string jsonResponse = www.downloadHandler.text;
                    
                    if (debugMode)
                        Debug.Log($"Server response: {jsonResponse}");
                    
                    // Parse the JSON to extract the transcription
                    // Using simple string manipulation for simplicity
                    int startIndex = jsonResponse.IndexOf("\"transcription\":") + 17; // +17 to skip the key and quotes
                    int endIndex = jsonResponse.LastIndexOf("\"");
                    
                    if (startIndex > 16 && endIndex > startIndex)
                    {
                        // Extract the substring
                        string transcription = jsonResponse.Substring(startIndex, endIndex - startIndex);
                        
                        // Remove any escape characters
                        transcription = transcription.Replace("\\", "");
                        
                        onTranscriptionComplete?.Invoke(transcription);
                    }
                    else
                    {
                        onError?.Invoke("Failed to parse transcription from response");
                    }
                }
                catch (Exception e)
                {
                    Debug.LogError($"Error parsing response: {e.Message}");
                    onError?.Invoke($"Error parsing response: {e.Message}");
                }
            }
            else
            {
                Debug.LogError($"Error sending audio to server: {www.error}");
                onError?.Invoke($"Server error: {www.error}");
            }
            
            // Clean up
            www.Dispose();
        }
    }
}