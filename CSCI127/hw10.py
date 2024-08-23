#Name: Bonnie Lei
#Email: bonnie.lei49@myhunter.cuny.edu
#Write a program that implements the pseudocode below:
# For i = 5, 10, 15, 20, 25, ... ,300:
#      Walk forward i steps
#      Turn left 91 degrees

import turtle
t = turtle.Turtle()

for i in range(5,300,5):
	t.forward(i)
	t.left(91)
