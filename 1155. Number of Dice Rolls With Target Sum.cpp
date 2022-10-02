Output Status :

Runtime: 109 ms, faster than 18.17% of C++ online submissions for Number of Dice Rolls With Target Sum.
Memory Usage: 8.4 MB, less than 59.18% of C++ online submissions for Number of Dice Rolls With Target Sum.


class Solution {
public:
    int numRollsToTarget(int d, int f, int target) {
          vector<int> dp(target + 1);
          dp[0] = 1;
          for (int i = 1; i <= d; ++i) {
            vector<int> dp1(target + 1);
            for (int j = 1; j <= f; ++j)
              for (auto k = j; k <= target; ++k)
                dp1[k] = (dp1[k] + dp[k - j]) % 1000000007;
            swap(dp, dp1);
          }
  return dp[target];
}
};
