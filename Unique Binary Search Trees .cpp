Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Binary Search Trees.
Memory Usage: 6 MB, less than 64.16% of C++ online submissions for Unique Binary Search Trees.


class Solution {
public:
    int numTrees(int n) {
       vector<int> dp(n+1);
        dp[0] = 1, dp[1] = 1;
        for (int i = 2; i <= n; i++)
            for (int j = 1; j <= i; j++)
                dp[i] += dp[i-j] * dp[j-1];
        
        return dp[n];
    }
};
