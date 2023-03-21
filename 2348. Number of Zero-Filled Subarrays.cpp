Output Status : 

Runtime
173 ms
Beats
61.99%
Memory
107.6 MB
Beats
54.45%

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long cnt = 0,i=0;
        for(int n : nums){
            if(n == 0){
                cnt += ++i;
            }else{
                i = 0;
            }
        }
        return cnt;
    }
};
