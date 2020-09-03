input_str = input("Enter a string: ")

final_str = ""
rev = reversed(input_str)

if list(input_str) == list(rev):
    print(input_str, "is palindrome")
else:
    print(input_str, "is not palindrome")
