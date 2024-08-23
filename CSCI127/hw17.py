#Name: Bonnie Lei 
#Email: bonnie.lei49@myhunter.cuny.edu 
#Prompt the user to enter a string and call it s.

word = input("Enter string: ")#.lower()

for i in range(len(word)):
    print(word[:i])

for i in range(len(word)):
    print(word[i:])
  
print("\nThank you for using my program!")
