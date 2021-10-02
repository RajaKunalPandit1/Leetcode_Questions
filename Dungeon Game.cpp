Output Status:

Runtime: 19 ms, faster than 7.32% of C++ online submissions for Dungeon Game.
Memory Usage: 9.1 MB, less than 14.83% of C++ online submissions for Dungeon Game.


class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        
         int m = dungeon.size(), n = dungeon[0].size();
        vector<vector<int>> dp (m+1,vector<int>(n+1,INT_MAX));
        dp[m][n-1] = dp[m-1][n] = 1;
        for(int i=m-1;i>=0;--i){
            for(int j=n-1;j>=0;--j){
                dp[i][j] = max(1,min(dp[i+1][j],dp[i][j+1])-dungeon[i][j]);
            }
        }
        return dp[0][0];
        
    }
};
