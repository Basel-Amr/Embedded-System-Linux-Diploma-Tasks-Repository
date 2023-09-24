"""
Task-14 : Write a function that prints the precentage of the battery and make notifications
@author : Basel Amr
"""
from plyer import notification
 
import psutil
import time
battery=psutil.sensors_battery()
percent=battery.percent
print(percent)

notification.notify(
            title = "Battery Percentage",
            message=str(percent) + "% percent remaining" ,
            timeout=2
)
        # waiting 
time.sleep(5)