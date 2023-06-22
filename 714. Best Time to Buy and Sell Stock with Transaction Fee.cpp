Output Status : 

Runtime
116 ms
Beats
85.89%
Memory
55 MB
Beats
87.53%

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
                int buy = INT_MIN;
        int sell = 0;

        for (int price : prices) {
            buy = max(buy, sell - price);
            sell = max(sell, buy + price - fee);
        }

        return sell;

    }
};
