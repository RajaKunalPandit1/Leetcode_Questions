Output Status : 

Runtime: 363 ms, faster than 53.97% of C++ online submissions for Contains Duplicate II.
Memory Usage: 77 MB, less than 72.38% of C++ online submissions for Contains Duplicate II.


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            if(mp.find(nums[i]) != mp.end() && abs(mp[nums[i]] - i) <= k){
                return true;
            }else{
                mp[nums[i]] = i;
            }
        }
        return false;
    }
};
