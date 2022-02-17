Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Combination Sum.
Memory Usage: 10.7 MB, less than 96.55% of C++ online submissions for Combination Sum.


class Solution {

    void uniqueCombinations(int idx,int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
        
        if(idx == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(arr[idx] <= target){
            ds.push_back(arr[idx]);
            uniqueCombinations(idx,target-arr[idx], arr, ans,ds);
            ds.pop_back();
        }
        uniqueCombinations(idx+1,target,arr,ans,ds);
    }
    
    public:
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        vector<int> ds;
        
        uniqueCombinations(0,target,candidates,res,ds);
        
        return res;
        
    }
};
