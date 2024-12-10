class Solution:
    def maximumLength(self, s: str) -> int:
        n = len(s) 
        substrings = set()
        for i in range(n):
            for j in range(i + 1, n + 1):
                substring = s[i:j]

                if len(set(substring)) == 1:  
                    substrings.add(substring)

        # print(substrings)
        # print("\n")
        res = []
        for word in substrings:
            l = len(word)
            count = 0
            # print("word: ", word)
            for i in range(0, n):

                w = s[i:i+l] 
                if w == word:
                    count+=1
                # ct = w.count(word)
                # count+=ct
            
            if(count >= 3):
                # print(word, ":", count)
                # print("\n")
                res.append(word)

                
        if len(res) > 0:
            match = max(res, key=len)
            return len(match)
        else:
            return -1
        
            

word = "aaaa"
sol = Solution()
a = sol.maximumLength(word)
print(a)