Output Status : 

Runtime
3 ms
Beats
45.34%
Memory
5.9 MB
Beats
63.99%

class Solution {
public:
    int bulbSwitch(int n) {
        long long i=1;
        int ct=0;
        while((i*i)<=n){
            i++;
            ct++;
        }
        return ct;
    }
};
