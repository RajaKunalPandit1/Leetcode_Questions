Output Status:

Runtime: 4 ms, faster than 35.21% of C++ online submissions for Power of Two.
Memory Usage: 5.9 MB, less than 21.79% of C++ online submissions for Power of Two.


class Solution {
public:
    bool isPowerOfTwo(int n) {
        
       return (n > 0 && (n & (n - 1)) == 0);
        
    }
};

// Another Solution 

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        //idx must be less than 31 beacuse 2^31 is greater than range of int
        for(int idx = 0; idx <= n/2 && idx < 31; idx++){
            int mul = pow(2,idx);
            if(mul == n)
                return true;
        }
        return false;
    }
};

// Power of 4 

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        // 31/2 = 15.5 in case of four
        //idx must be less than 31 beacuse 4^15.5 is greater than range of int
        for(int idx = 0; idx <= n/2 && idx < 15.5; idx++){
            int mul = pow(4,idx);
            if(mul == n)
                return true;
        }
        return false;
    }
};
