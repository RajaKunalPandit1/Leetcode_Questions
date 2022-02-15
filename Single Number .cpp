Output Status: 

Runtime: 35 ms, faster than 33.36% of C++ online submissions for Single Number.
Memory Usage: 20.7 MB, less than 6.42% of C++ online submissions for Single Number.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int,int> mp;
        int res = 0;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto x: mp){
            if(x.second == 1){
                res = x.first;
                break;
            }
        }
        return res;
        
    }
};
