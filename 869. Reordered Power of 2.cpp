Output Status : 

Runtime: 4 ms, faster than 61.58% of C++ online submissions for Reordered Power of 2.
Memory Usage: 6.3 MB, less than 45.48% of C++ online submissions for Reordered Power of 2.


class Solution {
public:
    
    long counter(int n){
        
        long res = 0;
        for(;n;n/=10){
            res += pow(10,n%10);
        }
        return res;
    }
    
    bool reorderedPowerOf2(int n) {
        long c = counter(n);
        
        for(int i=0;i<32;i++){
            if(counter(1<<i) == c) return true;
        }
        return false;
    }
};
