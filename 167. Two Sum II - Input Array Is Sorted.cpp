Output Status: 

Runtime: 24 ms, faster than 26.00% of C++ online submissions for Two Sum II - Input Array Is Sorted.
Memory Usage: 15.5 MB, less than 93.11% of C++ online submissions for Two Sum II - Input Array Is Sorted.


// Naive Solution :: Time : O(N) :: Aux_Space : O(N)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        unordered_map<int,int> mp;
        
        vector<int> res;
        
        for(int i=0;i<n;i++){
            int var = target - nums[i];
            
            if(mp.find(var)!=mp.end()){
                res.push_back(mp[var]+1);
                res.push_back(i+1);
                break;
            }else{
                mp[nums[i]] = i;
            }
        }
        return res;
    }
};


// Efficient Solution :: Time : O(logN) :: Aux_Space : O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int low =0 ,high = n-1;
        
        while(low<high){
            if(nums[low]+nums[high] == target){
                return {low+1,high+1};
            }else if(nums[low] + nums[high] > target){
                high--;
            }else{
                low++;
            }
        }
        return {};
    }
};
