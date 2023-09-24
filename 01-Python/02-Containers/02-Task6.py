"""
Task-06 : Find the largest item from a given list using loop.py
@author : Basel Amr
"""


def larget_item(ls):
    max=ls[0]
    for i in ls:
        if i> max:
            max=i
        
    return max

print(larget_item([200,1,2,5,6000,7,100,500])) 