Output Status:

Runtime: 4 ms, faster than 36.08% of C++ online submissions for House Robber.
Memory Usage: 7.6 MB, less than 72.52% of C++ online submissions for House Robber.


class Solution {
public:
    int rob(vector<int>& nums) {
            for (int i = 1; i < nums.size(); i++) nums[i] = max(nums[i - 1], nums[i] + (i < 2 ? 0 : nums[i - 2]));
    return nums.size() < 2 ? nums[0] : nums[nums.size() - 1];
    }
};
