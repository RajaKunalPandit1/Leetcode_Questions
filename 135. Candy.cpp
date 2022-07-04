Output Status : 

Runtime: 41 ms, faster than 31.55% of C++ online submissions for Candy.
Memory Usage: 17.7 MB, less than 84.26% of C++ online submissions for Candy.

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
