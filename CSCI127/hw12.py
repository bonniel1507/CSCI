#Name: Bonnie Lei 
#Email: bonnie.lei49@myhunter.cuny.edu 
#Write a program that asks the user for the hexcode of a color and then displays a turtle that color.

import turtle

word = input("Enter a hex string: ")

t = turtle.Turtle()
t.shape("turtle")
t.color(word)
