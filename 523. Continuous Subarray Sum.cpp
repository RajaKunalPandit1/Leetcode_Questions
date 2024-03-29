Output Status : 

Runtime: 473 ms, faster than 50.59% of C++ online submissions for Continuous Subarray Sum.
Memory Usage: 113.8 MB, less than 71.68% of C++ online submissions for Continuous Subarray Sum.

  
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        if(n < 2){
            return false;
        }
        
        unordered_map<int,int> mp;
        
        mp[0] = -1;
        
        int runningSum = 0;
        
        for(int i=0;i<n;i++){
            
            runningSum += nums[i];
            
            if(k != 0){
                runningSum = runningSum %k;
            }
            
            if(mp.find(runningSum) != mp.end()){
                if(i-mp[runningSum]>1){
                    return true;
                }
            }else{
                mp[runningSum] = i;
            }
        }
        return false;
    }
};
