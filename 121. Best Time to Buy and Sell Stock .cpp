Output Status : 

Runtime
153 ms
Beats
32.84%
Memory
93.4 MB
Beats
56.82%

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minEle = prices[0];
        int res = 0;

        for(int i = 1;i<n;i++){
            if(prices[i] > minEle){
                res = max(res,(prices[i]-minEle));
            }else{
                minEle = prices[i];
            }
        }
        return res;    
    }
};
