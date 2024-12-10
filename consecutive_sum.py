from typing import List
class Solution:
    def consecutiveNumbersSum(self, n: int) -> int:
        m = 1
        counter = 0
        while m * (m-1) // 2 < n:
            print(m)
            pv = n - (m * (m - 1)//2)
            if pv > 0 and pv % m == 0:
                counter += 1

            m+=1
        
        return counter
       

nums = 5
solution = Solution()
a = solution.consecutiveNumbersSum(n=nums)
print("res", a)