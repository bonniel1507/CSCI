# Bonnie Lei
# bonnie.lei49@myhunter.cuny.edu
# Modify the program from Lab 10 that makes a turtle walk 100 times. Each "walk" is 10 steps forward and the turtle can turn 0,1,2,...,359 degrees (chosen randomly) at the beginning of each walk

import turtle 
import random 

t = turtle.Turtle()
t.speed(10)
for i in range(100):
	t.forward(10)
	t.right(random.randrange(360))
