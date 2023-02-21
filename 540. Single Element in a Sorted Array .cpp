Output Status :

Runtime
31 ms
Beats
49.25%
Memory
27.5 MB
Beats
6.23%

// Naive Solution :: Time : O(N) :: Aux_Space : O(N)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        int res = 0;

        for(auto x: mp){
            if(x.second == 1){
                res = x.first;
                break;
            }
        }
        return res;
    }
};

// Efficient Solution :: Time : O(logN) :: Aux_Space : (1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        
        int low= 0,high= n-2;
        
        while(low<=high){
            
            int mid = (low+high) >> 1;
            
            if(nums[mid] == nums[mid^1]){
                low = mid+1;
            }else{
                high = mid-1;
            }
            
        }
        return nums[low];
        
    }
};
