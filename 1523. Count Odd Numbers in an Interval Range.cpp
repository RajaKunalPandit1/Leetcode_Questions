Output Status : 

Runtime
1750 ms
Beats
30.64%
Memory
6.1 MB
Beats
7.66%

class Solution {
public:
    int countOdds(int low, int high) {
        int res =0;

        for(int i=low;i<=high;i++){
          if(i %2 != 0){
            res++;
          }
        }
        return res;
    }
};
