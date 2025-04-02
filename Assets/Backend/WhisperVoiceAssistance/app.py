import os
import base64
import numpy as np
import tempfile
import whisper
import requests
import json
from flask import Flask, request, jsonify
from flask_socketio import SocketIO, emit
import wavio
from TTS.api import TTS
import create_database as DataStoreInit

app = Flask(__name__)
app.config['SECRET_KEY'] = 'your-secret-key'
socketio = SocketIO(app, cors_allowed_origins="*")

# Load the Whisper model (Open-source STT)
print("Loading Whisper model...")
model = whisper.load_model("base")

# Initialize TTS model
print("Loading TTS model...")
tts = TTS("tts_models/en/ljspeech/tacotron2-DDC")

def send_to_anatomy_api(question):
    """
    Send the question to the anatomy API and return the response
    """
    api_url = "http://localhost:8000/anatomy_answers"
    headers = {
        'accept': 'application/json',
        'Content-Type': 'application/json',
        'X-CSRFTOKEN': 'kKZWKEc9N99PMmTSou3GHKL26KiOi96oLe0ijZfC5WQYcLz2dDwh5SWfhiizEem5'
    }
    payload = {
        "question": question
    }
    
    try:
        response = requests.post(api_url, headers=headers, json=payload)
        response.raise_for_status()  # Raise an exception for HTTP errors
        
        # Parse the JSON response
        response_data = response.json()
        
        # Extract the response field
        return response_data.get("response", "Sorry, I couldn't find an answer to that question.")
    
    except requests.exceptions.RequestException as e:
        print(f"Error calling anatomy API: {str(e)}")
        return f"Sorry, there was an error processing your question. Error: {str(e)}"

@app.route('/')
def index():
    return "Audio Processing Server is running!"

@socketio.on('connect')
def handle_connect():
    print('Client connected')
    emit('server_response', {'data': 'Connected to the server. Auto-recording will begin.'})

@socketio.on('disconnect')
def handle_disconnect():
    print('Client disconnected')

@socketio.on('audio_data')
def handle_audio_data(data):
    """
    Process incoming audio data from the client
    data: JSON containing base64 encoded audio data
    """
    try:
        # Extract audio data
        audio_data = data.get('audio')
        sample_rate = data.get('sample_rate', 44100)
        
        # Decode base64 audio
        audio_bytes = base64.b64decode(audio_data)
        
        # Save to temporary WAV file
        with tempfile.NamedTemporaryFile(suffix='.wav', delete=False) as temp_file:
            temp_input_path = temp_file.name
            temp_file.write(audio_bytes)
        
        # Transcribe audio
        print("Transcribing audio...")
        result = model.transcribe(temp_input_path)
        transcribed_text = result["text"].strip()
        print(f"Recognized Speech: {transcribed_text}")
        
        # Only process if there's actual text content
        if transcribed_text:
            # Send the transcribed text to the anatomy API
            print("Sending to anatomy API...")
            api_response = send_to_anatomy_api(transcribed_text)
            print(f"API Response: {api_response}")
            
            # Generate TTS response
            print("Generating speech response...")
            temp_output_path = temp_input_path.replace('.wav', '_response.wav')
            tts.tts_to_file(text=api_response, file_path=temp_output_path)
            
            # Read the response audio file and encode to base64
            with open(temp_output_path, 'rb') as audio_file:
                response_audio = base64.b64encode(audio_file.read()).decode('utf-8')
            
            # Clean up temporary files
            os.remove(temp_input_path)
            os.remove(temp_output_path)
            
            # Send response back to the client
            emit('audio_response', {
                'text': transcribed_text,
                'response': api_response,
                'audio': response_audio,
                'sample_rate': sample_rate
            })
        else:
            # If no text was recognized, just tell the client to continue
            print("No speech detected in the audio")
            emit('error', {'message': 'No speech detected. Try speaking again.'})
            
    except Exception as e:
        print(f"Error processing audio: {str(e)}")
        emit('error', {'message': str(e)})

# REST API endpoint for audio processing (alternative to WebSocket)
@app.route('/process_audio', methods=['POST'])
def process_audio():
    try:
        audio_data = request.json.get('audio')
        sample_rate = request.json.get('sample_rate', 44100)
        
        # Decode base64 audio
        audio_bytes = base64.b64decode(audio_data)
        
        # Save to temporary WAV file
        with tempfile.NamedTemporaryFile(suffix='.wav', delete=False) as temp_file:
            temp_input_path = temp_file.name
            temp_file.write(audio_bytes)
        
        # Transcribe audio
        result = model.transcribe(temp_input_path)
        transcribed_text = result["text"].strip()
        
        # Send the transcribed text to the anatomy API
        api_response = send_to_anatomy_api(transcribed_text)
        
        # Generate TTS response
        temp_output_path = temp_input_path.replace('.wav', '_response.wav')
        tts.tts_to_file(text=api_response, file_path=temp_output_path)
        
        # Read the response audio file and encode to base64
        with open(temp_output_path, 'rb') as audio_file:
            response_audio = base64.b64encode(audio_file.read()).decode('utf-8')
        
        # Clean up temporary files
        os.remove(temp_input_path)
        os.remove(temp_output_path)
        
        return jsonify({
            'text': transcribed_text,
            'response': api_response,
            'audio': response_audio,
            'sample_rate': sample_rate
        })
        
    except Exception as e:
        return jsonify({'error': str(e)}), 500

if __name__ == '__main__':
    if(os.path.isdir("chroma")):
        print("Data base already created!!!")
    else:
        database_creation = DataStoreInit()
        database_creation.generate_data_store()
    app.run(debug=True, host='0.0.0.0', port=5000)