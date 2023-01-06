Output Status : 

Runtime
410 ms
Beats
34.72%
Memory
76.4 MB
Beats
95.51%

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin(),costs.end());

        int res = 0;

        for(int i=0;i<n;i++){
            if(coins >= costs[i] && coins > 0){
                res++;
                coins -= costs[i];
            }else{
                break;
            }
        }
        return res;
    }
};
