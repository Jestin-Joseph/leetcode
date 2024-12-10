def miniMaxSum(arr):
    # Write your code here
    arr.sort()
    print(sum(arr[:4]), sum(arr[1:]))

arr = [1,3,5,7,9]
res = miniMaxSum(arr=arr)