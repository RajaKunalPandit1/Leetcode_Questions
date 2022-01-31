Output Status: 

Runtime: 3 ms, faster than 95.59% of C++ online submissions for Richest Customer Wealth.
Memory Usage: 7.8 MB, less than 49.93% of C++ online submissions for Richest Customer Wealth.


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int r = accounts.size();
        int c = accounts[0].size();
        
        int res = 0;
        int sum = 0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                sum += accounts[i][j];
            }
            res = max(res,sum);
            sum = 0;
        }
        return res;
    }
};

// Another Solution 

int maximumWealth(vector<vector<int>>& accounts,int m = INT_MIN) {
     for( auto &p : accounts)  m = max(accumulate(p.begin(), p.end(),0), m);
     return m;
 }
