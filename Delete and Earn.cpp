Output Status: 

Runtime: 24 ms, faster than 16.68% of C++ online submissions for Delete and Earn.
Memory Usage: 13.9 MB, less than 15.60% of C++ online submissions for Delete and Earn.


class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
      int n = 10001;
    
	//take the total sum by each number
    vector<int> sum(n, 0);
    vector<int> dp(n, 0);
    
    for(auto num: nums){
        sum[num] += num;
    }
    
    dp[0] = 0;
    dp[1] = sum[1];
    //now apply the house robbing concept
    for(int i=2; i<n; i++){
        dp[i] = max(dp[i-2] + sum[i], dp[i-1]);
    }
    
    return dp[n-1];
         
    }
};
