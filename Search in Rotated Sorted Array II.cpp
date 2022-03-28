Output Status: 

Runtime: 11 ms, faster than 41.14% of C++ online submissions for Search in Rotated Sorted Array II.
Memory Usage: 14.1 MB, less than 32.08% of C++ online submissions for Search in Rotated Sorted Array II.



class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int l = 0;
        int r = nums.size()-1;
        
        while(l<=r){
            
            int mid = l+(r-l)/2;
            
            if(nums[mid] == target){
                return true;
            }
            
            if(nums[l] == nums[mid] && nums[r] == nums[mid]){
                l++;
                r--;
            }else if(nums[l]<=nums[mid]){
                
                if(nums[l] <= target && nums[mid] > target){
                    r = mid-1;
                }else{
                    l = mid+1;
                }
                
            }else{
                if(nums[mid] < target && nums[r] >= target){
                    
                    l = mid+1;
                    
                }else{
                    r = mid-1;
                }
            }
        }
        return false;
    }
};
