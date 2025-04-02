from openai import OpenAI
import logging
import os
import json
from dotenv import load_dotenv

load_dotenv()

client = OpenAI()
model = "gpt-4o"

class HeartPartExtraction(BaseModel):
    part: str = Field(description="name of the part of a human heart")
    

def extract_heart_part(user_inp: str) -> HeartPartExtraction:



    completion = client.beta.chat.completions.parse(
        model=model,
        messages=[
            {
                "role": "system",
                "content": "Analyze the text and extract which part of heart is the question about and extract the part name"
            },
            {
                "role": "user",
                "content": user_inp,
            },
        ],
        response_format=HeartPartExtraction
    )
    result = completion.choices[0].message.parsed
    return result

def start():

    question = input("Where is the kidney located?")
    part = extract_heart_part(question)
    print(part)

if __name__ == "__main__":
    start()