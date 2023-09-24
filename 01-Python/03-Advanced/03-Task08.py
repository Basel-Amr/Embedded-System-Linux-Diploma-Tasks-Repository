"""
Task-08 : Write a Python program to count the number of lines in a text file.
@author : Basel Amr
"""

import os

def fileLength(fileName):
    with open (fileName , 'r') as f:
        lines = f.readlines()
        print(len(lines))


def fileWordNumber(fileName):
    with open (fileName, 'r') as f:
        words= f.read().split()
        print(len(words))
    
fileLength("CountWord.txt")
fileWordNumber("CountWord.txt")