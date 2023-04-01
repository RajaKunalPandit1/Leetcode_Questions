Output Status : 

Runtime
40 ms
Beats
56.43%
Memory
27.5 MB
Beats
93.53%

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int low = 0,high = n-1;

        while(low <= high){
            int mid = (low + high)/2;

            if(nums[mid] > target){
                high = mid - 1;
            }else if(nums[mid] < target){
                low = mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};
