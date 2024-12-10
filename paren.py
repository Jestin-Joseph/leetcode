from typing import List

class Solution:
    def diffWaysToCompute(self, expression: str) -> List[int]:
        if(expression.isdigit()):
            return [int(expression)]
        
        res = []
        for i, char in enumerate(expression):
            if char in "+-*":
                

                left_part = self.diffWaysToCompute(expression[:i])
                right_part = self.diffWaysToCompute(expression[i+1:])

                for l in left_part:
                    for r in right_part:
                        if char == '+':
                            res.append(l+r)
                        elif char == '-':
                            res.append(l - r)
                        elif char == '*':
                            res.append(l*r)
        return res

nums = "2*3-4*5"
solution = Solution()
a = solution.diffWaysToCompute(expression=nums)
print("res", a)