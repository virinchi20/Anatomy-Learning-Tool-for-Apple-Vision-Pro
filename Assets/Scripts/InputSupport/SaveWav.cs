using System;
using System.IO;
using UnityEngine;

namespace InputSupport
{
    public static class SaveWav
    {
        private const int HEADER_SIZE = 44;

        public static byte[] Save(string filename, AudioClip clip)
        {
            if (!filename.ToLower().EndsWith(".wav"))
            {
                filename += ".wav";
            }

            var filepath = Path.Combine(Application.temporaryCachePath, filename);

            // Make sure directory exists
            Directory.CreateDirectory(Path.GetDirectoryName(filepath));

            using (var fileStream = CreateEmpty(filepath))
            {
                ConvertAndWrite(fileStream, clip);
                WriteHeader(fileStream, clip);
            }

            return File.ReadAllBytes(filepath);
        }

        private static FileStream CreateEmpty(string filepath)
        {
            var fileStream = new FileStream(filepath, FileMode.Create);
            byte emptyByte = new byte();

            for (int i = 0; i < HEADER_SIZE; i++)
            {
                fileStream.WriteByte(emptyByte);
            }

            return fileStream;
        }

        private static void ConvertAndWrite(FileStream fileStream, AudioClip clip)
        {
            var samples = new float[clip.samples];
            clip.GetData(samples, 0);

            Int16[] intData = new Int16[samples.Length];

            // Convert to Int16
            byte[] bytesData = new byte[samples.Length * 2];
            int rescaleFactor = 32767; // Convert -1..1 to -32768..32767

            for (int i = 0; i < samples.Length; i++)
            {
                intData[i] = (short)(samples[i] * rescaleFactor);
                byte[] byteArr = BitConverter.GetBytes(intData[i]);
                byteArr.CopyTo(bytesData, i * 2);
            }

            fileStream.Write(bytesData, 0, bytesData.Length);
        }

        private static void WriteHeader(FileStream fileStream, AudioClip clip)
        {
            var hz = clip.frequency;
            var channels = clip.channels;
            var samples = clip.samples;

            fileStream.Seek(0, SeekOrigin.Begin);

            byte[] riff = System.Text.Encoding.UTF8.GetBytes("RIFF");
            fileStream.Write(riff, 0, 4);

            byte[] chunkSize = BitConverter.GetBytes(fileStream.Length - 8);
            fileStream.Write(chunkSize, 0, 4);

            byte[] wave = System.Text.Encoding.UTF8.GetBytes("WAVE");
            fileStream.Write(wave, 0, 4);

            byte[] fmt = System.Text.Encoding.UTF8.GetBytes("fmt ");
            fileStream.Write(fmt, 0, 4);

            byte[] subChunk1 = BitConverter.GetBytes(16);
            fileStream.Write(subChunk1, 0, 4);

            UInt16 audioFormat = 1; // PCM
            byte[] audioFormatBytes = BitConverter.GetBytes(audioFormat);
            fileStream.Write(audioFormatBytes, 0, 2);

            UInt16 numChannels = (UInt16)channels;
            byte[] numChannelsBytes = BitConverter.GetBytes(numChannels);
            fileStream.Write(numChannelsBytes, 0, 2);

            byte[] sampleRateBytes = BitConverter.GetBytes(hz);
            fileStream.Write(sampleRateBytes, 0, 4);

            byte[] byteRate = BitConverter.GetBytes(hz * channels * 2); // 2 bytes per sample
            fileStream.Write(byteRate, 0, 4);

            UInt16 blockAlign = (UInt16)(channels * 2);
            byte[] blockAlignBytes = BitConverter.GetBytes(blockAlign);
            fileStream.Write(blockAlignBytes, 0, 2);

            UInt16 bitsPerSample = 16;
            byte[] bitsPerSampleBytes = BitConverter.GetBytes(bitsPerSample);
            fileStream.Write(bitsPerSampleBytes, 0, 2);

            byte[] dataString = System.Text.Encoding.UTF8.GetBytes("data");
            fileStream.Write(dataString, 0, 4);

            byte[] subChunk2 = BitConverter.GetBytes(samples * channels * 2);
            fileStream.Write(subChunk2, 0, 4);
        }
    }
}