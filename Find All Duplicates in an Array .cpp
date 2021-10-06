Output Status:

Runtime: 168 ms, faster than 5.55% of C++ online submissions for Find All Duplicates in an Array.
Memory Usage: 44.5 MB, less than 18.90% of C++ online submissions for Find All Duplicates in an Array.


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> res;
        int n = nums.size();
        
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        for(auto x:m){
            if(x.second>1){
                res.push_back(x.first);
            }
        }
        return res;
        
    }
};

// Another Solution 

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans; 
        for (auto x : nums) {
            x = abs(x); 
            if (nums[x-1] < 0) ans.push_back(x); 
            nums[x-1] *= -1; 
        }
        return ans; 
    }
};
