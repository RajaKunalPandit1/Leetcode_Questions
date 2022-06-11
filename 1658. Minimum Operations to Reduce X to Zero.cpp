Output Status : 

Runtime: 688 ms, faster than 20.45% of C++ online submissions for Minimum Operations to Reduce X to Zero.
Memory Usage: 168.3 MB, less than 14.25% of C++ online submissions for Minimum Operations to Reduce X to Zero.

  
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n = nums.size();
        int sum = 0;
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            sum += nums[i];
            mp[sum] = i;
        }
        
        if(x>sum){
            return -1;
        }
        mp[0] = 0;
        
        int longest = 0;
        sum -= x;
        
        int val = 0;
        
        for(int i=0;i<n;i++){
            
            val += nums[i];
            if(mp.count(val-sum)){
                
                if(val-sum == 0){
                    longest = max(longest,i-mp[val-sum]+1);
                }else{
                    longest = max(longest,i-mp[val-sum]);
                }   
            }
        }
        return longest == 0?(sum == 0?n:-1):n-longest;
    }
};
