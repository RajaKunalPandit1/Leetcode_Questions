Output Status:

Runtime: 4 ms, faster than 49.74% of C++ online submissions for Minimum Cost to Move Chips to The Same Position.
Memory Usage: 7.4 MB, less than 10.09% of C++ online submissions for Minimum Cost to Move Chips to The Same Position.


class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        
        int n = position.size();
        int odd =0,eve =0;
        
        for(int i=0;i<n;i++){
            if(position[i]%2 == 0){
                eve++;
            }else{
                odd++;
            }
        }
        
        if(odd>eve){
            return eve;
        }else{
            return odd;
        }
        
    }
};
