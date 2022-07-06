Output Status : 

Runtime: 2 ms, faster than 42.73% of C++ online submissions for A Number After a Double Reversal.
Memory Usage: 5.8 MB, less than 87.38% of C++ online submissions for A Number After a Double Reversal.


class Solution {
public:
    
     int reverse(int x) {
        
        long long res = 0;
        
        while(x){
            res = res*10 + x%10;
            x = x/10;
        }
        
        return (res > INT_MAX || res < INT_MIN) ? 0 : res;
        
    }
    
    bool isSameAfterReversals(int num) {
        
        int temp = num;
        
        int var = reverse(temp);
        int res = reverse(var);
        
        return (num == res);
        
    }
};
