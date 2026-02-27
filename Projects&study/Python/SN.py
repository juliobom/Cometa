import os
from openai import OpenAI

os.environ["OPENAI_API_KEY"] = "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"

client = OpenAI()

prompt = "Qual é a capital da França?"

response = client.chat.completions.create(
    input=prompt,
    model="gpt-5"
)
print(response.choices[0].message.content)