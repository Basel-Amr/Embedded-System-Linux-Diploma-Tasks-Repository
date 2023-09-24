"""
Task-07 : Find the largest item from a given list using loop.py
@author : Basel Amr
"""


import requests
url=requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
print(url.json()['bpi']["USD"])