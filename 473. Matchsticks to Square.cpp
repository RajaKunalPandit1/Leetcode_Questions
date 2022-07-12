Output Status : 

Runtime: 334 ms, faster than 54.24% of C++ online submissions for Matchsticks to Square.
Memory Usage: 64.4 MB, less than 7.22% of C++ online submissions for Matchsticks to Square.


class Solution {
public:
    
    bool isPossible(vector<int> matchsticks, int target,vector<int> &res, int idx){
        
        if(idx == matchsticks.size()){
            return (res[0] == res[1] && res[1] == res[2] && res[2] == res[3]);
        }
        
        for(int i=0;i<4;i++){
            
            if(res[i] + matchsticks[idx] > target){
                continue;
            }
            
            int j = i-1;
            
            while(j>=0){
                
                if(res[i] == res[j]) break;
                
                j--;
                
            }
            
            if(j != -1)
                continue;
            
            
            res[i] += matchsticks[idx];
            
            if(isPossible(matchsticks,target,res,idx+1)) return true;
            
            res[i] -= matchsticks[idx];
            
        }
        return false;
    }
    
    
    
    bool makesquare(vector<int>& matchsticks) {
        
        //Edge Case
        if(matchsticks.size() == 0)
            return 0;
        
        int sum = accumulate(matchsticks.begin(),matchsticks.end(),0);
        
        int target = sum/4;
            
        vector<int> sides(4,0);
        
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        
        return isPossible(matchsticks,target,sides,0);
        
    }
};
