"""
Task-16 : Long Time Task Alexa
@author : Basel Amr
"""

import speech_recognition as sr
import pyttsx3
import pywhatkit
import datetime
import wikipedia
import pyjokes

listener=sr.Recognizer()
engine=pyttsx3.init()
voices=engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)

def talk(text):
    engine.say(text)
    engine.runAndWait()

def take_command():
    try:
        with sr.Microphone() as source:
            print("listening......") 
            listener.adjust_for_ambient_noise(source)
            voice=listener.listen(source)
            print("after listening")
            
            command=listener.recognize_google(voice,language="en-US")
            print(command)
            command=command.lower()
            if 'alexa' in command:
                command=command.replace('alexa','')
               # talk(command)
                print(command)
            return command

    except:
        pass

        

def run_alexa():
    command=take_command()
    print(command)
    if 'play' in command :
        song=command.replace('play','')
        print(song)
        talk("playing"+song)
        pywhatkit.playonyt(song)
    elif 'time' in command:
        time=datetime.datetime.now().strftime('%I:%M %p')
        print(time)
        talk("current time is"+ time)
    elif 'wiki' in command:
        person=command.replace('wiki','')
        info=wikipedia.summary(person,1)
        print(info)
        talk(info)
    elif 'joke' in command:
        talk(pyjokes.get_joke())
        print(pyjokes.get_joke())
    else:
        talk('please say the command again')
        print('please say the command again')

while True:
    run_alexa()