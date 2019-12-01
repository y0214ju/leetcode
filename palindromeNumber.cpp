//https://leetcode.com/problems/palindrome-number/


class Solution {
public:
   //using two pointers and converted int to string, Time Complexity: O(N)
    bool isPalindrome(int x) {
        std::string s = to_string(x);
        int i = 0;
        int j = s.size() - 1;
        while(i < j) {
            if (s[i] != s[j]) return false;
            else {
                i++;
                j--;  
           }
       }
        return true;
    }
};