using UnityEngine;

namespace InputSupport
{
    public class MelSpectrogramGenerator : MonoBehaviour
    {
        [SerializeField] private int sampleRate = 16000;
        [SerializeField] private int fftSize = 400;
        [SerializeField] private int hopSize = 160;
        [SerializeField] private int melBands = 80;
        [SerializeField] private float minFrequency = 0;
        [SerializeField] private float maxFrequency = 8000;
        
        private float[][] melFilterbank;
        
        void Awake()
        {
            InitializeMelFilterbank();
        }
        
        private void InitializeMelFilterbank()
        {
            // Create mel filterbank matrix for the FFT bins
            melFilterbank = new float[melBands][];
            
            // Convert min/max frequencies to mel scale
            float melMin = FreqToMel(minFrequency);
            float melMax = FreqToMel(maxFrequency);
            
            // Create equally spaced points on mel scale
            float[] melPoints = new float[melBands + 2];
            for (int i = 0; i < melPoints.Length; i++)
            {
                melPoints[i] = melMin + (melMax - melMin) * i / (melBands + 1);
            }
            
            // Convert back to frequency
            float[] freqPoints = new float[melPoints.Length];
            for (int i = 0; i < melPoints.Length; i++)
            {
                freqPoints[i] = MelToFreq(melPoints[i]);
            }
            
            // Convert to FFT bin indices
            int[] fftBins = new int[freqPoints.Length];
            for (int i = 0; i < freqPoints.Length; i++)
            {
                fftBins[i] = Mathf.FloorToInt(freqPoints[i] * fftSize / sampleRate);
                fftBins[i] = Mathf.Clamp(fftBins[i], 0, fftSize / 2);
            }
            
            // Create triangular filters
            for (int i = 0; i < melBands; i++)
            {
                melFilterbank[i] = new float[fftSize / 2 + 1];
                
                for (int j = 0; j < melFilterbank[i].Length; j++)
                {
                    if (j >= fftBins[i] && j <= fftBins[i + 2])
                    {
                        if (j <= fftBins[i + 1])
                        {
                            melFilterbank[i][j] = (j - fftBins[i]) / (float)(fftBins[i + 1] - fftBins[i]);
                        }
                        else
                        {
                            melFilterbank[i][j] = (fftBins[i + 2] - j) / (float)(fftBins[i + 2] - fftBins[i + 1]);
                        }
                    }
                }
            }
        }
        
        public float[,] GenerateMelSpectrogram(float[] audioData)
        {
            int numFrames = (audioData.Length - fftSize) / hopSize + 1;
            float[,] melSpectrogram = new float[melBands, numFrames];
            
            // Apply Hann window to each frame
            float[] window = new float[fftSize];
            for (int i = 0; i < fftSize; i++)
            {
                window[i] = 0.5f * (1 - Mathf.Cos(2 * Mathf.PI * i / (fftSize - 1)));
            }
            
            // Process each frame
            for (int frame = 0; frame < numFrames; frame++)
            {
                int frameStart = frame * hopSize;
                
                // Apply window and prepare FFT
                float[] fftReal = new float[fftSize];
                float[] fftImag = new float[fftSize];
                
                for (int i = 0; i < fftSize; i++)
                {
                    if (frameStart + i < audioData.Length)
                    {
                        fftReal[i] = audioData[frameStart + i] * window[i];
                    }
                }
                
                // Apply FFT (simplified)
                ApplyFFT(fftReal, fftImag);
                
                // Calculate power spectrum
                float[] powerSpectrum = new float[fftSize / 2 + 1];
                for (int i = 0; i < powerSpectrum.Length; i++)
                {
                    powerSpectrum[i] = fftReal[i] * fftReal[i] + fftImag[i] * fftImag[i];
                }
                
                // Apply mel filterbank
                for (int i = 0; i < melBands; i++)
                {
                    float melEnergy = 0;
                    for (int j = 0; j < powerSpectrum.Length; j++)
                    {
                        melEnergy += powerSpectrum[j] * melFilterbank[i][j];
                    }
                    
                    // Convert to log scale (with a small offset to avoid log(0))
                    melSpectrogram[i, frame] = Mathf.Log10(Mathf.Max(melEnergy, 1e-10f));
                }
            }
            
            return melSpectrogram;
        }
        
        private void ApplyFFT(float[] real, float[] imag)
        {
            // Simplified FFT implementation (for demonstration)
            // In production, use a more optimized FFT library
            int n = real.Length;
            
            // Check if n is a power of 2
            if ((n & (n - 1)) != 0)
            {
                Debug.LogWarning("FFT size must be a power of 2");
                return;
            }
            
            // Bit reversal
            int j = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (i < j)
                {
                    // Swap real[i] and real[j]
                    float tempReal = real[i];
                    real[i] = real[j];
                    real[j] = tempReal;
                    
                    // Swap imag[i] and imag[j]
                    float tempImag = imag[i];
                    imag[i] = imag[j];
                    imag[j] = tempImag;
                }
                
                int k = n / 2;
                while (k <= j)
                {
                    j -= k;
                    k /= 2;
                }
                j += k;
            }
            
            // Compute FFT
            for (int m = 2; m <= n; m *= 2)
            {
                float angleStep = -2 * Mathf.PI / m;
                for (int i = 0; i < n; i += m)
                {
                    for (int k = 0; k < m / 2; k++)
                    {
                        int evenIndex = i + k;
                        int oddIndex = i + k + m / 2;
                        
                        float cosVal = Mathf.Cos(k * angleStep);
                        float sinVal = Mathf.Sin(k * angleStep);
                        
                        float oddReal = real[oddIndex] * cosVal - imag[oddIndex] * sinVal;
                        float oddImag = real[oddIndex] * sinVal + imag[oddIndex] * cosVal;
                        
                        real[oddIndex] = real[evenIndex] - oddReal;
                        imag[oddIndex] = imag[evenIndex] - oddImag;
                        
                        real[evenIndex] += oddReal;
                        imag[evenIndex] += oddImag;
                    }
                }
            }
        }
        
        private float FreqToMel(float freq)
        {
            return 2595 * Mathf.Log10(1 + freq / 700);
        }
        
        private float MelToFreq(float mel)
        {
            return 700 * (Mathf.Pow(10, mel / 2595) - 1);
        }
    }
}