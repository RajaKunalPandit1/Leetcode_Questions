Output Status : 

Runtime: 43 ms, faster than 28.42% of C++ online submissions for Power of Three.
Memory Usage: 5.6 MB, less than 98.87% of C++ online submissions for Power of Three.

  
  class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n == 0) return false;
        
        while(n != 1){
            
            if(n%3 != 0){
                return false;
            }
            n = n/3;
        }
        return true;
    }
};
