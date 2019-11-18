class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target < nums[0]) {
            return 0;
        }
       for (int i = 0; i < nums.size(); i++) {
           if (nums[i] == target) {
               return i;
           }
           else if (i >= 1 && nums[i -1] < target && nums[i] > target) {
               return i;
           }
         
       } 
        return nums.size();
    }
};