Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of 1 Bits.
Memory Usage: 6 MB, less than 48.05% of C++ online submissions for Number of 1 Bits.


class Solution {
public:
    int hammingWeight(uint32_t n) {
        
          int count=0;
        while(n>0){
            if(n & 1 == 1) count++;
            n = n >> 1;
        }
        return count;
        
    }
};
