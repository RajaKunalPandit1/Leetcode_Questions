Output Status:

Runtime: 21 ms, faster than 8.33% of C++ online submissions for Single Number III.
Memory Usage: 10.7 MB, less than 20.05% of C++ online submissions for Single Number III.

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> res;
        int n = nums.size();
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        for(auto x:m){
            if(x.second == 1){
                res.push_back(x.first);
            }
        }
        return res;
    }
};
