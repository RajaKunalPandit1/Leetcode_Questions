Output Status:

Runtime: 37 ms, faster than 17.16% of C++ online submissions for Single Number.
Memory Usage: 17 MB, less than 19.42% of C++ online submissions for Single Number.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        return accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
    }
};
