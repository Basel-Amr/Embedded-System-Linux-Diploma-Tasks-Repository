"""
Task-18 : Led Program
@author : Basel Amr
"""

from  tkinter import *
def ledon():
    print("led on ")
    C.create_oval(90, 50, 130,120,fill="red")
    Label(window,text="Led ON",font=15).place(x=155,y=180)

def ledoff():
    print("led off")
    C.create_oval(90, 50, 130,120,fill="white")
    Label(window,text="Led OFF",font=15).place(x=155,y=180)


window=Tk()
window.title("Mazen Sadek")
window.geometry("400x400+800+250")
window.resizable(False,False)

C = Canvas(window,height=200, width=200)
btn=Button(window,text="close",command=window.destroy,width=15)
btn2=Button(window,text="ledon",command=ledon,width=15) 
btn3=Button(window,text="ledoff",command=ledoff,width=15) 


btn.place(x=140,y=280)
btn2.place(x=140,y=250)
btn3.place(x=140,y=220)
C.pack()

window.mainloop() 