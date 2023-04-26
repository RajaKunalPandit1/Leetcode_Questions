Output Status : 

Runtime
3 ms
Beats
56.14%
Memory
6 MB
Beats
7.98%

class Solution {
public:
    int addDigits(int num) {
        
            int res = 0;

            while(num > 0){

                res += num%10;
                num = num/10;

                if(num == 0 && res > 9){
                    num = res;
                    res = 0;
                }
            }
        return res;
    }
};

