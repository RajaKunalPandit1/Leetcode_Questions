Output Status : 

Runtime: 86 ms, faster than 5.15% of C++ online submissions for Binary Search.
Memory Usage: 27.6 MB, less than 13.43% of C++ online submissions for Binary Search.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int low = 0,high = n-1;
        int res = -1;
        
        while(low<=high){
            
            int mid = low + (high-low)/2;
            
            if(nums[mid] > target){
                high = mid-1;
            }else if(nums[mid] < target){
                low = mid+1;
            }else{
                res = mid;
                break;
            }
        }
        return res;
        
    }
};
