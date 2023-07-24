Output Status : 

Runtime
4 ms
Beats
40.18%
Memory
5.8 MB
Beats
99.91%

class Solution {
public:
    double myPow(double x, int n) {
        
        double res  = 1.0;
        
        long int temp = abs(n);

        while(temp){

            if(temp%2 == 0){
                x = x*x;
                temp /= 2;
            }else{
                res *= x;
                temp--;
            }
        }

        if(n < 0){
            res = 1/(double)res;
        }
        return res;
    }
};
