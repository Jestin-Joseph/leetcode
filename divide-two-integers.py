import math
class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if divisor == 0:
            return
            
        quot = dividend/divisor
        return(math.trunc(quot))


dividend = -2147483648
divisor = -1

sol = Solution()
a = sol.divide(dividend, divisor)
print(a)