Output Status:

Runtime: 12 ms, faster than 5.39% of C++ online submissions for Search Insert Position.
Memory Usage: 9.7 MB, less than 22.57% of C++ online submissions for Search Insert Position.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int low=0,high=n-1,mid=0;
        
        while(low<=high){
            
            mid = (low+high)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
        
    }
};
