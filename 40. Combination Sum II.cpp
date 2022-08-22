Output Status : 

Runtime: 12 ms, faster than 45.47% of C++ online submissions for Combination Sum II.
Memory Usage: 10.7 MB, less than 73.71% of C++ online submissions for Combination Sum II.


class Solution {
public:
    
    void findCombo(int ind, int target, vector<int> &candidates, vector<vector<int>> &res, vector<int> &ds){
        
        if(target == 0){
            res.push_back(ds);
            return;
        }else{
            
            for(int i=ind;i<candidates.size();i++){
                
                if(candidates[i]>target) return;
                if(i && candidates[i] == candidates[i-1] && i>ind) continue;
                ds.push_back(candidates[i]);
                findCombo(i+1,target-candidates[i],candidates,res,ds);
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> ds;
        
        
        findCombo(0,target,candidates,res,ds);
        return res;
    }
};
