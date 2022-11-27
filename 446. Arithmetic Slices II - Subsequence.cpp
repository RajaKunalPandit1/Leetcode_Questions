Output Status : 

Runtime: 1224 ms, faster than 72.52% of C++ online submissions for Arithmetic Slices II - Subsequence.
Memory Usage: 154.8 MB, less than 38.93% of C++ online submissions for Arithmetic Slices II - Subsequence.

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
         vector< unordered_map<long, long> > dp(nums.size());
        int res = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                long diff = (long)nums[i] - (long)nums[j];
                
                dp[i][diff]++;
                
                if (dp[j].find(diff) != dp[j].end()) {
                    dp[i][diff] += dp[j][diff];
                    res += dp[j][diff];
                }
            }
        }
        
        return res;
    }
};
