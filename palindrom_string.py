class Solution:
    def countSubstrings(self, s: str) -> int:
        
        def is_palindrome(sub):
            return sub == sub[::-1]
        
        count = 0
        for i in range(len(s)):
            for j in range(i, len(s)):
                if is_palindrome(( s[i:j+1])):
                    count +=1

        return count
        


sol = Solution()
string = "abc"

a = sol.countSubstrings(string)
print('out: ', a)