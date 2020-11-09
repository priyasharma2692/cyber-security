  
def summer_69(arr):
    while 6 in arr: # while 6 in array
        idx6 = arr.index(6)
        idx9 = arr.index(9)
        del arr[idx6:idx9+1] # delete part of array between index of 6 and index of 9
        print (arr) # [4, 5, 1, 1, 4, 3]
    return sum(arr)


summer_69([1, 3, 5])
summer_69([4, 5, 6, 7, 8, 9])
summer_69([2, 1, 6, 9, 11]) 
