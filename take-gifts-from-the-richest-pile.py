from typing import List
import math

class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        
        i = k

        while i > 0:
            biggest = max(gifts)
            ind =  gifts.index(biggest)
            gifts[ind] = math.floor(math.sqrt(biggest))
            i-=1
        
        return sum(gifts)

sol = Solution()
gifts = [1,1,1,1]
k = "a"
a = sol.pickGifts(gifts, k)
print(a)