import whisper
import sounddevice as sd
import numpy as np
import wavio
import os
from TTS.api import TTS  # Open-source Coqui-TTS

# 🔹 Load the Whisper model (Open-source STT)
model = whisper.load_model("base")

# 🔹 Recording function
def record_audio(filename="input.wav", duration=5, fs=44100):
    print("🎤 Recording... Speak now!")
    audio = sd.rec(int(duration * fs), samplerate=fs, channels=1, dtype=np.int16)
    sd.wait()
    wavio.write(filename, audio, fs, sampwidth=2)
    print("✅ Recording complete!")

# 🔹 Speech-to-Text function (STT)
def transcribe_audio(filename="input.wav"):
    print("📝 Transcribing...")
    result = model.transcribe(filename)
    text = result["text"]
    print(f"🎙 Recognized Speech: {text}")
    return text

# 🔹 Text-to-Speech function (TTS using Coqui-TTS)
def text_to_speech_coqui(text, filename="response.wav"):
    print("🔊 Generating speech with Coqui-TTS...")
    tts = TTS("tts_models/en/ljspeech/tacotron2-DDC")  # Use a downloaded model
    tts.tts_to_file(text=text, file_path=filename)
    os.system(f"play {filename}")  # Use 'aplay' on Linux, 'afplay' on Mac

# 🔹 Main function: Record → Transcribe → Speak
def main():
    record_audio()
    recognized_text = transcribe_audio()
    text_to_speech_coqui(recognized_text)  # Speak back what was transcribed

if __name__ == "__main__":
    main()
