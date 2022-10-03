Output Status : 

Runtime: 348 ms, faster than 28.17% of C++ online submissions for Minimum Time to Make Rope Colorful.
Memory Usage: 95.4 MB, less than 50.05% of C++ online submissions for Minimum Time to Make Rope Colorful.

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int n = colors.size(),max_cost = 0,res = 0;
        
        for(int i=0;i<n;i++){
            
            if(i>0 && colors[i] != colors[i-1]){
                max_cost = 0;
            }
            res += min(max_cost,neededTime[i]);
            max_cost = max(max_cost,neededTime[i]);
        }
        return res;
    }
};
