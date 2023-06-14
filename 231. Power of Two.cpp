Output Status : 

Runtime
3 ms
Beats
47.79%
Memory
5.9 MB
Beats
47.18%

class Solution {
public:
    bool isPowerOfTwo(int n) {
    
        return (n >0 && (n&(n-1)) == 0);
    }
};
