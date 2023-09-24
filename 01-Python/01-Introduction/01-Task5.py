"""
Task-05 : Print the calendar of a given month and year
@author : Basel Amr
"""
import calendar
year = int(input("Enter the Year : "))
month = int(input("Enter the Month : "))
cal = calendar.month(year, month, w=0, l=0)
print(cal)