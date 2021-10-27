Output Status:

Runtime: 4 ms, faster than 45.19% of C++ online submissions for Sort Colors.
Memory Usage: 8.2 MB, less than 69.85% of C++ online submissions for Sort Colors.


class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int low=0,mid=0,high= n-1;
        
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
        
    }
};
