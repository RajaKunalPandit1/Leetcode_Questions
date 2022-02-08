Output Status:

Runtime: 3 ms, faster than 53.62% of C++ online submissions for Add Digits.
Memory Usage: 5.9 MB, less than 75.31% of C++ online submissions for Add Digits.


class Solution {
public:
    int addDigits(int num) {
        
        int res = 0;
        
        while(num>0){
            res += num%10;
            num = num/10;
            
            if(num == 0 && res>9){
                num = res;
                res = 0;
            }
        }
        return res;
    }
};
