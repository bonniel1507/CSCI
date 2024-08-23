#Name: Bonnie Lei
#Email: bonnie.lei49@myhunter.cuny.edu
#Date: SEP 25
#Modify the program from Lab 3 to show the shades of blue.

import turtle

turtle.colormode(255)
t = turtle.Turtle()
t.shape("turtle")
t.backward(150)

for i in range(0,255,10):
    t.forward(10)
    t.pensize(i)
    t.color(0,0,i)
