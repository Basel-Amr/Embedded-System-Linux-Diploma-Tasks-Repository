"""
Task-01 : Write a Python Program to count the number 4 in a given list
@author : Basel Amr
"""

number = int(input("Enter number of elements : "))
list1 = []
print(f"Enter Your List Which Contains {number} numbers : ")
for i in range(number):
    list1.append(int(input()))
number = int(input("Enter The Number Which You Want To Count : "))
count = list1.count(number)
print(f"The Number 4 is found in the list {count} times")

"""
Another Way we can calculate it using C programming language concept
for i in list1 :
    if(number == i):
        count+=1
print(f"The Number 4 is found in the list {count} times")
"""