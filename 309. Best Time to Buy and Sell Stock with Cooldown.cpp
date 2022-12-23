Output Status: 

Runtime
9 ms
Beats
46.64%
Memory
11.2 MB
Beats
91.1%

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
