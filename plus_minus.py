def plusMinus(arr):
    # Write your code here
    n = len(arr)
    res_arr =  [0,0,0]
    for i in range(0, n):
        if(arr[i] > 0):
            res_arr[0] +=1
        
        if(arr[i] < 0):
            res_arr[1] +=1

        if(arr[i] == 0):
            res_arr[2] +=1   

    print(res_arr)   
    
    print("\n".join(format(res_arr[i]/n, '.6f' )for i in range(0, len(res_arr))))


arr = [-4, 3, -9, 0, 4, 1]
res =  plusMinus(arr)