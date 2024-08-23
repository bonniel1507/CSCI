#Name: Bonnie Lei 
#Email: bonnie.lei49@myhunter.cuny.edu 
#Write a program that prompts the user to enter a word and then prints out the word with each letter shifted right by 13. That is, 'a' becomes 'n', 'b' becomes 'o', ... 'y' becomes 'l', and 'z' becomes 'm'.

word = input("Enter a word: ").lower()
word2 = ""

for i in range(len(word)):
    if ord(word[i]) <= 109:
        word2 += chr(ord(word[i])+13)
    else:
        word2 += chr(ord(word[i])-13)
        
print("Your word in code is:")
print(word2)
