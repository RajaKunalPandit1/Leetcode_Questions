Output Status : 

Runtime
3 ms
Beats
91.34%
Memory
14 MB
Beats
18.44%

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int n = nums.size();

        int low = 0,high = n-1;

        while(low <= high){

            int mid = (low + high) >> 1;
            
            if(nums[mid] == target){
                return true;
            }
            if((nums[low] == nums[mid]) && (nums[high] == nums[mid]))
            {
                low++;
                high--;
            }else if(nums[low] <= nums[mid]){

                if(target >= nums[low] && target < nums[mid]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                if(target > nums[mid] && target <= nums[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return false;
    }
};
