Output Status:

Runtime: 8 ms, faster than 51.90% of C++ online submissions for Best Time to Buy and Sell Stock II.
Memory Usage: 13 MB, less than 86.23% of C++ online submissions for Best Time to Buy and Sell Stock II.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0, profit=0, buy, sell;
        while(i < prices.size()-1){
            while(i < prices.size()-1 && prices[i+1] <= prices[i]){
                i++;
            }
            buy = prices[i];
            while(i < prices.size()-1 && prices[i+1] > prices[i]){
                i++;
            }
            sell = prices[i];
            profit += sell - buy;
        }
        return profit;
    }
};
