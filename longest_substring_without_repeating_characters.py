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
                
