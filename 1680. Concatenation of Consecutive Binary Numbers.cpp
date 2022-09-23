Output Status : 

Runtime: 74 ms, faster than 70.65% of C++ online submissions for Concatenation of Consecutive Binary Numbers.
Memory Usage: 5.9 MB, less than 82.61% of C++ online submissions for Concatenation of Consecutive Binary Numbers.

class Solution {
public:
    int concatenatedBinary(int n) {
        long ans = 0, mod = 1e9+7;
        for (int i = 1; i <= n; ++i) {
            int len = 0;
            for (int j = i; j; j >>= 1, ++len);
            ans = ((ans << len) % mod + i) % mod;
        }
        return ans;
    }
};
