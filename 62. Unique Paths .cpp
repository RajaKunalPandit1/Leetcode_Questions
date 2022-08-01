Output Status : 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Paths.
Memory Usage: 6.3 MB, less than 53.20% of C++ online submissions for Unique Paths.


class Solution {
public:
    
    int uniquePaths(int i,int j,int m, int n, vector<vector<int>> &dp){
        
        if(i>=n || j>=m) return 0;
        
        if(i == n-1 && j == m-1){
            return 1;
        }
        
        if(dp[i][j] != -1) return dp[i][j];
        
        return dp[i][j] = uniquePaths(i+1,j,m,n,dp) + uniquePaths(i,j+1,m,n,dp);
        
    }
    
    
    int uniquePaths(int m, int n) {
        
        int i=0,j=0;
        
        vector<vector<int>> dp(n,vector<int>(m,-1));
        
        return uniquePaths(i,j,m,n,dp);
        
    }
};
