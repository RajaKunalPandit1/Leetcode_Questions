Output Status : 

Runtime: 394 ms, faster than 52.50% of C++ online submissions for Longest Increasing Subsequence.
Memory Usage: 10.6 MB, less than 28.08% of C++ online submissions for Longest Increasing Subsequence.

  
// Naive Solution :: Time : O(N^2) :: Aux_Space : O(N)
  
  
  class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        int res = 1;
        
        vector<int> dp(n,1);
        
        for(int i=1;i<n;i++){
            
            for(int j=i-1;j>=0;j--){
                
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[i],dp[j] + 1);
                    res = max(res,dp[i]);
                }
            }
        }
        return res;
    }
};

// Efficient Solution :: Time : O(NlogN) :: Aux-Space : O(1)

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> res;
        
        for(int i=0;i<n;i++){
            
            auto it = std::lower_bound(res.begin(),res.end(),nums[i]);
            if(it == res.end())
                res.push_back(nums[i]);
            else
                *it = nums[i];
        }
        return res.size();
    }
};
