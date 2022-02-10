Output Status: 

Runtime: 135 ms, faster than 36.84% of C++ online submissions for Subarray Sum Equals K.
Memory Usage: 42 MB, less than 13.98% of C++ online submissions for Subarray Sum Equals K.


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
         std::unordered_map<int, int> seen = {{0, 1}};
        int count = 0, sum = 0;
        for (auto n: nums) {
            sum += n;
            count += seen[sum - k];
            seen[sum]++;
        }
        return count;
    }
};
