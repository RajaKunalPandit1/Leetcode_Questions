Output Status : 

Runtime: 5 ms, faster than 82.52% of C++ online submissions for Triangle.
Memory Usage: 8.6 MB, less than 91.19% of C++ online submissions for Triangle.


  class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n = triangle.size();
        vector<int> dp(n,0);
        
        for(int i=0;i<n;i++){    
            dp[i] = triangle[n-1][i];
        }
        
        for(int i=n-2;i>=0;i--){
            
            for(int j=0;j<triangle[i].size();j++){
                dp[j] = min(dp[j],dp[j+1]) + triangle[i][j];
            }
        }
        return dp[0];
    }
};
