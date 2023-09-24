"""
Task-09 : Write a Python program to write a “list” to a file.
@author : Basel Amr
"""

color = ['Red', 'Yellow', 'Green', 'Blue', 'White']
with open('abc.txt', 'w') as myfile:
    myfile.write(" ".join(color))
content = open('abc.txt')
print(content.read())