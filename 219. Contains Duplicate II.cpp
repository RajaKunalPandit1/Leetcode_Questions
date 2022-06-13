Output Status : 

Runtime: 192 ms, faster than 86.09% of C++ online submissions for Contains Duplicate II.
Memory Usage: 77.2 MB, less than 31.09% of C++ online submissions for Contains Duplicate II.

// Naive Solution :: Time : O(N^2) :: Aux_Space : O(1)

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] == nums[j] && (abs(i-j) <= k)){
                    return true;
                }
            }
        }
        return false;
    }
};


// Efficient Solution :: Time : O(N) :: Aux_Space : O(N)

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
