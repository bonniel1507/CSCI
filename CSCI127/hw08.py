#Name: Bonnie Lei 
#Email: bonnie.lei49@myhunter.cuny.edu 
#Date: September 13, 2023 
#Write a program that prompts the user to enter a phrase and then prints out the ASCII code of each character in the phrase.

word = input("Enter a message: ")

for i in range(len(word)):
    print(ord(word[i]))
