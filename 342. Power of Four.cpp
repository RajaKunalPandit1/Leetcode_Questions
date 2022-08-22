Output Status : 

Runtime: 5 ms, faster than 23.39% of C++ online submissions for Power of Four.
Memory Usage: 5.9 MB, less than 24.97% of C++ online submissions for Power of Four.

  

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n == 0) return false;
        
        while(n!=1){
            
            if(n%4 != 0){
                return false;
            }
            n = n/4;
        }
        return true;
    }
};

// Another Solution 

bool isPowerOfFour(int num) {
    return num > 0 && (num & (num - 1)) == 0 && (num - 1) % 3 == 0;
}
