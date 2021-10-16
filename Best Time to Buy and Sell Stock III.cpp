Output Status:

Runtime: 207 ms, faster than 28.66% of C++ online submissions for Best Time to Buy and Sell Stock III.
Memory Usage: 87.8 MB, less than 13.44% of C++ online submissions for Best Time to Buy and Sell Stock III.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
    if(n<=1){
        return 0;
    }
    
    vector<vector<int>> profit(3,vector<int>(n,0));
    
    
    for(int i=1;i<3;i++){
        int max_till = INT_MIN;
        for(int j=1;j<n;j++){
            max_till = max(max_till, (profit[i-1][j-1] - prices[j-1]) );
            profit[i][j] = max(profit[i][j-1], prices[j]+max_till);
        }
    }
    
    
    return profit[2][n-1];
        
    }
};
