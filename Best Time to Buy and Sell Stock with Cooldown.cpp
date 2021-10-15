Output Status:

Runtime: 4 ms, faster than 71.58% of C++ online submissions for Best Time to Buy and Sell Stock with Cooldown.
Memory Usage: 11.1 MB, less than 96.78% of C++ online submissions for Best Time to Buy and Sell Stock with Cooldown.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;
	
    int Ap = 0, Bp = -prices[0], C = INT_MIN;
  
	for (int i = 1; i != prices.size(); i++) {
		int An = max(Ap, C);
		int Bn = max(Bp, Ap - prices[i]);
		C      = Bp + prices[i];
		Ap = An, Bp = Bn;
	  }
    
	  return max(Ap, C);
    }
};
