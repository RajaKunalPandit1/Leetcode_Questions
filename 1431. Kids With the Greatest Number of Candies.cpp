Output Status : 

Runtime
3 ms
Beats
66.58%
Memory
9 MB
Beats
16.58%

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n = candies.size();
        
        vector<bool> res(n,false);

        int cnt = *max_element(candies.begin(),candies.end());

        for(int i=0;i<n;i++){
            
            if((candies[i] + extraCandies) >= cnt){
                res[i] = true;
            }
        }
        return res;
    }
};

