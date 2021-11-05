Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Arranging Coins.
Memory Usage: 5.9 MB, less than 26.19% of C++ online submissions for Arranging Coins.

class Solution {
public:
    int arrangeCoins(int n) {
        long lo = 1, hi = n;
        while (lo <= hi) {
            long mid = (lo+hi)/2;
            long total = mid*(mid+1)/2;
            if (total == n) {
                return mid;
            }
            else if (total > n) {
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }
        return int(hi);
    }
};
