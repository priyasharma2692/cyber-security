def lesser_of_two_evens(a,b):
    if a % 2 == 0 and b % 2 == 0:
        if b < a: 
            return b
        else:
            return a
    else:
        if a < b:
            return b
        else:
            return a
print(lesser_of_two_evens(5,56))
