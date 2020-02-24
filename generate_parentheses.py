class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        ans = []
        def backtrack(new = "", i = 0, left= 0, right=0):
            if left < right or left > n:
                return
            if i == 2 * n:
                ans.append(new)
                return
            else:
                backtrack(new + "(", i + 1, left + 1, right)
                backtrack(new + ")", i + 1, left, right + 1)
        backtrack()
        return ans
