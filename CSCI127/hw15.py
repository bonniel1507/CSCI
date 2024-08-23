#Name: Bonnie Lei
#Email: bonnie.lei49@myhunter.cuny.edu
#Write a program that asks the user for a message, then prints out that message in reverse. The reversed output message should be printed with two copies of each character per line.

word = input("Enter a word: ")

for i in range(len(word)):
    print(word[len(word)-i-1] + " " + word[len(word)-i-1])
