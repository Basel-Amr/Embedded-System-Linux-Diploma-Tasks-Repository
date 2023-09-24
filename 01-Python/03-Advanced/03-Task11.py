"""
Task-11 : Write a Python program to get the command-line arguments  
@author : Basel Amr
"""

import sys


print(f'This is the name/path of the script: {sys.argv[0]}')
print(f"Number of arguments: {len(sys.argv)}")
print(f'Arguments List: {sys.argv}')