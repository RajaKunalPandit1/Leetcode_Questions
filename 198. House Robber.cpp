Output Status : 

Runtime
0 ms
Beats
100%
Memory
7.7 MB
Beats
78.33%


class Solution {
public:
    int rob(vector<int>& nums) {
         for (int i = 1; i < nums.size(); i++) nums[i] = max(nums[i - 1], nums[i] + (i < 2 ? 0 : nums[i - 2]));
    return nums.size() < 2 ? nums[0] : nums[nums.size() - 1];
    }
};
