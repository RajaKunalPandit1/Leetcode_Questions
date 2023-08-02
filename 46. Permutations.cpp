Output Status : 

Runtime
2 ms
Beats
68.70%
Memory
7.7 MB
Beats
60.28%

class Solution {
public:
    void helper(vector<int>&nums, vector<int>& ans, vector<vector<int>>& res){
        
        if( size(ans) == size(nums)){
            res.push_back(ans);
            return;
        }
        
        for(int i = 0; i<size(nums); i++){
                if(find(begin(ans), end(ans), nums[i]) == ans.end()){
                    ans.push_back(nums[i]);
                    helper(nums,ans, res);
                    ans.pop_back(); 
                }  
        }        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int> ans;
        vector<vector<int>> res;
        helper(nums, ans, res);
        return res;
    }
};
