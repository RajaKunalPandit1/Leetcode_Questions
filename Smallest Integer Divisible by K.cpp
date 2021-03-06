Output Status: 

Runtime: 11 ms, faster than 33.61% of C++ online submissions for Smallest Integer Divisible by K.
Memory Usage: 7 MB, less than 26.89% of C++ online submissions for Smallest Integer Divisible by K.


class Solution {
public:
    int smallestRepunitDivByK(int k) {
        // if (k % 2 == 0 || k % 5 == 0) return -1;  // this trick may save a little time
        int n = 0, ans = 0;
        bool *hit = new bool[k];     
        for (int i = 0; i < k; i ++) hit[i] = false;
        while (true) { // at most k times, because 0 <= remainder < k
            ++ ans;
            n = (n * 10 + 1) % k; // we only focus on whether to divide, so we only need to keep the remainder.
            if (n == 0) return ans; // can be divisible
            if (hit[n]) return -1; // the remainder of the division repeats, so it starts to loop that means it cannot be divisible.
            hit[n] = true;
        }
    }
};
