Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count Sorted Vowel Strings.
Memory Usage: 6.5 MB, less than 12.14% of C++ online submissions for Count Sorted Vowel Strings.

class Solution {
public:
    int countVowelStrings(int n) {
         vector<vector<int>>dp(n + 1, vector<int>(6));
        for (int i = 1; i <= n; ++i)
            for (int k = 1; k <= 5; ++k)
                dp[i][k] = dp[i][k - 1] + (i > 1 ? dp[i - 1][k] : 1);
        return dp[n][5];
    }
};
