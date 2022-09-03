Output Status : 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Numbers With Same Consecutive Differences.
Memory Usage: 7.2 MB, less than 90.47% of C++ online submissions for Numbers With Same Consecutive Differences.
  
  
class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int> curr = {1,2,3,4,5,6,7,8,9};
        
        for(int i=2;i<=n;i++){
            
            vector<int> cur;
            
            for(auto x: curr){
                
                int y = x%10;
                
                if(y+k < 10){
                    cur.push_back(x*10 + y + k);
                }
                if(y-k >= 0 && k > 0){
                    cur.push_back(x*10 + y-k);
                }
            }
            curr = cur;
        }
        return curr;
    }
};
