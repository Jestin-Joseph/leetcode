def diagonalDifference(arr):
    # Write your code here
    n = len(arr)
    sum_l= 0
    sum_r = 0

    i = 0

    while i < n:
        for j, k in zip(range(0, len(arr[i])), reversed(range(0, len(arr[i])))):
            sum_l += arr[i][j]
            sum_r += arr[i][k]
            i+=1
      
    
    return abs(sum_l - sum_r)

# arr = [[1, 2, 3], [4, 5, 6], [9, 8, 9 ]]

arr= [
[6, 6, 7, -10, 9, -3, 8, 9, -1],
[9, 7, -10, 6, 4, 1, 6, 1, 1],
[-1, -2, 4, -6, 1, -4, -6, 3, 9],
[-8, 7, 6, -1, -6, -6, 6, -7, 2],
[-10, -4, 9, 1, -7, 8, -5, 3, -5],
[-8, -3, -4, 2, -3, 7, -5, 1, -5],
[-2, -7, -4, 8, 3, -1, 8, 2, 3],
[-3, 4, 6, -7, -7, -8, -3, 9, -6],
[-2, 0, 5, 4, 4, 4, -3, 3, 0]
]
c = diagonalDifference(arr)
print(c)



# a = [1, 2, 3, 5]
# # print(a)

# for i, j in zip(range(0, len(a)), reversed(range(0, len(a)))):
#     print(i, j)