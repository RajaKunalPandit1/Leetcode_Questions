Output Status:

Runtime: 64 ms, faster than 56.38% of C++ online submissions for Stone Game IV.
Memory Usage: 6.3 MB, less than 75.17% of C++ online submissions for Stone Game IV.


class Solution {
public:
    bool winnerSquareGame(int n) {
         vector<bool> dp(n + 1);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j * j <= i; j++){
                if(!dp[i - j * j]){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};
