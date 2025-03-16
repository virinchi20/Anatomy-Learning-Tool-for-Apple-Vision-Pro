from flask import Flask, request, jsonify, send_file
from flask_cors import CORS
import whisper
import numpy as np
import tempfile
import os
import logging
from TTS.api import TTS

# Setup logging
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

app = Flask(__name__)
CORS(app)  # Enable CORS for all routes

# Load the Whisper model (done once at startup)
logger.info("Loading Whisper model... this may take a moment")
model = whisper.load_model("base")  # You can use "tiny" for faster but less accurate results
logger.info("Whisper model loaded successfully")

# Load TTS model
logger.info("Loading TTS model... this may take a moment")
try:
    tts = TTS("tts_models/en/ljspeech/tacotron2-DDC")
    logger.info("TTS model loaded successfully")
except Exception as e:
    logger.error(f"Failed to load TTS model: {str(e)}")
    tts = None

@app.route('/transcribe', methods=['POST'])
def transcribe():
    if 'audio' not in request.files:
        return jsonify({'error': 'No audio file provided'}), 400
    
    try:
        # Get the audio file from the request
        audio_file = request.files['audio']
        
        # Create a temporary file to save the uploaded audio
        temp_dir = tempfile.mkdtemp()
        temp_path = os.path.join(temp_dir, "audio.wav")
        audio_file.save(temp_path)
        
        logger.info(f"Audio saved to temporary file: {temp_path}")
        
        # Transcribe the audio
        logger.info("Transcribing audio with Whisper...")
        result = model.transcribe(temp_path)
        text = result["text"]
        logger.info(f"Transcription result: {text}")
        
        # Clean up the temporary file
        os.remove(temp_path)
        os.rmdir(temp_dir)
        
        return jsonify({
            'status': 'success',
            'transcription': text
        })
    
    except Exception as e:
        logger.error(f"Error during transcription: {str(e)}")
        return jsonify({
            'status': 'error',
            'error': str(e)
        }), 500

@app.route('/synthesize', methods=['POST'])
def synthesize():
    if not request.is_json or 'text' not in request.json:
        return jsonify({'error': 'No text provided or invalid JSON'}), 400
    
    try:
        # Get the text from the request
        text = request.json['text']
        
        if tts is None:
            return jsonify({'error': 'TTS model not available'}), 500
        
        # Create a temporary file for the audio
        temp_dir = tempfile.mkdtemp()
        temp_path = os.path.join(temp_dir, "tts_output.wav")
        
        # Generate speech
        logger.info(f"Generating speech for: {text}")
        tts.tts_to_file(text=text, file_path=temp_path)
        
        # Send the audio file
        return send_file(
            temp_path,
            mimetype="audio/wav",
            as_attachment=True,
            download_name="speech.wav"
        )
    
    except Exception as e:
        logger.error(f"Error during speech synthesis: {str(e)}")
        return jsonify({
            'status': 'error',
            'error': str(e)
        }), 500

@app.route('/health', methods=['GET'])
def health_check():
    return jsonify({'status': 'ok', 'services': {
        'whisper': 'available', 
        'tts': 'available' if tts is not None else 'unavailable'
    }})

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)