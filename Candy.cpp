Ouput Status : 

Runtime
15 ms
Beats
74.70%
Memory
18 MB
Beats
29.76%

class Solution {
public:
    int candy(vector<int>& ratings) {
     
        int n = ratings.size();
        
        vector<int> candies(n,1);
        
        if(n == 1){
            return 1;
        }
        
        for(int i=1;i<n;i++){
            if(ratings[i] > ratings[i-1] && candies[i] <= candies[i-1]){
                candies[i] = candies[i-1] + 1;
            }
        }
        
        for(int i=n-2;i>=0;i--){
            if(ratings[i] > ratings[i+1] && candies[i] <= candies[i+1]){
                candies[i] = candies[i+1] + 1;
            }
        }
        
        int totalCandies = 0;
        
        for(int i=0;i<candies.size();i++){
            totalCandies += candies[i];
        }
        
        return totalCandies;
    }
};
