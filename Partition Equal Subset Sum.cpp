Output Status:

Runtime: 88 ms, faster than 82.80% of C++ online submissions for Partition Equal Subset Sum.
Memory Usage: 9.2 MB, less than 92.10% of C++ online submissions for Partition Equal Subset Sum.

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto a : nums) // Sum up the array
            sum += a;
        
        if (sum % 2) // If the sum is odd - we can never find two equal partitions
            return false;
        
        sum /= 2;
        vector<bool> dp(sum+1, false); // dp keeps for each number if it has a subset or not
        dp[0] = true;
        
        for (auto a : nums) {
            for (int i = sum; i >= a; i--) {
                dp[i] = dp[i] || dp[i-a]; // for each number, either we use it or we don't
            } 
        }
        return dp[sum];
    }
};
