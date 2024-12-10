def staircase(n):
    if n < 0 or n >100:
        print("not possible")
        return
    # Write your code here
    i = 1
    j = n - 1
    
    while i <= n:

        print(("."*j if j > 0 else "") + "#"*i)
        j-=1
        i+=1
n = 100
res =  staircase(n)

