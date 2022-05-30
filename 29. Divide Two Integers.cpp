Output Status :

Runtime: 10 ms, faster than 13.04% of C++ online submissions for Divide Two Integers.
Memory Usage: 6 MB, less than 30.45% of C++ online submissions for Divide Two Integers.


class Solution { // Time: O(logN^2) :: Aux_Space : O(1)
public:
    int divide(int dividend, int divisor) {
     
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        
        if(dividend == divisor){
            return 1;
        }
        
        bool flag = (dividend >= 0) == (divisor>=0)?true:false;
        
       unsigned int dividnd = abs(dividend);
       unsigned int divsor = abs(divisor);
        
        unsigned int res = 0;
        
        while(dividnd >= divsor){
            
            short cnt=0;
            
            while(dividnd > (divsor << cnt+1)){
                cnt++;
            }
            res += 1 << cnt;
            dividnd -= divsor<<cnt;
        }
        
        return flag?res: - res;
        
    }
};
