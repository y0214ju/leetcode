class Solution:
    #speed 53%, using two pointers
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s == "":
            return 0
        seen = ""
        left, right = 0, 0
        curmax = 1
        while right < len(s):
            if s[right] in seen:
                if len(seen) == 1:
                    seen = ""
                else:
                    curmax = max(len(seen), curmax)
                    i = seen.index(s[right])
                    seen = seen[i + 1: right]
                    left = i + 1
        
                
            seen += s[right]
            right += 1
            
        return max(len(seen),curmax)
   
# speed 30 %, iteration solution
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int: 
        if s =="":
            return 0
        word = []
        max_length = 1
        i = 0
        while i < len(s):
            if s[i] in word:
                cur_length = len(word)
                max_length = max(cur_length, max_length)
                word = []
                i = i - cur_length + 1
            word.append(s[i])
            i += 1
        return max(max_length, len(word))
                
