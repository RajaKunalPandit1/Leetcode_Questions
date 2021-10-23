Output Status:

Runtime: 13 ms, faster than 13.15% of C++ online submissions for Find Minimum in Rotated Sorted Array II.
Memory Usage: 12.3 MB, less than 58.16% of C++ online submissions for Find Minimum in Rotated Sorted Array II.

class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        
        int low=0,high = n-1;
        
        while(low<high){
            int mid = (low+high)>>1;
            
            if(nums[mid]<nums[high]){
                high = mid;
            }else if(nums[mid]>nums[high]){
                low = mid+1;
            }else{
                high--;
            }
        }
        return nums[low];
    }
};
