Output Status:

Runtime: 3 ms, faster than 57.56% of C++ online submissions for Reverse Bits.
Memory Usage: 6 MB, less than 48.83% of C++ online submissions for Reverse Bits.


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
          uint32_t ans = 0;
        for(int i=0; i < 32; i++){
            ans = ans << 1;
            if(n & 1 == 1) ans++;
            n = n >> 1;
        }
        return ans;
    }
};
