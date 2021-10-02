Output Status:

Runtime: 56 ms, faster than 21.93% of C++ online submissions for Binary Search.
Memory Usage: 27.6 MB, less than 59.01% of C++ online submissions for Binary Search.

class Solution {
public:
    int search(vector<int>& nums, int target) {
     
        int n = nums.size();
        int low=0,high =n-1;
        int res = -1;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(nums[mid] == target){
                res = mid;
                break;
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
       
    }
};
