Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Hamming Distance.
Memory Usage: 5.9 MB, less than 72.54% of C++ online submissions for Hamming Distance.


class Solution {
public:
    int hammingDistance(int x, int y) {
          int z=x^y;int count=0;
        while(z){
            if(z&1)count++;
            z=z>>1;
        }
        return count;
    }
};
