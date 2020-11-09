import string

inputString = input("Enter the string : ")
allAlphabets = 'abcdefghijklmnopqrstuvwxyz'
flag = 0
for char in allAlphabets:
    if char not in inputString.lower():
        flag = 1
if flag == 1:
    print("This is not a pangram string");
else:
    print("It is a pangram string")
