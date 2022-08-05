Output Status : 

Runtime: 5 ms, faster than 33.70% of C++ online submissions for Combination Sum IV.
Memory Usage: 6.6 MB, less than 65.95% of C++ online submissions for Combination Sum IV.


class Solution {
public:
    
    int cs(vector<int> &nums, int target, vector<int> &dp){
        
        if(dp[target] > -1) return dp[target];
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=target){
                count += cs(nums,target-nums[i],dp);
            }
        }
        dp[target] = count;
        return count;
        
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int> dp(target+1,-1);
        dp[0] = 1;
        cs(nums,target,dp);
        return dp[target];
    }
};
