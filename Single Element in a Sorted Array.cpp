Output Status:

Runtime: 8 ms, faster than 77.96% of C++ online submissions for Single Element in a Sorted Array.
Memory Usage: 11 MB, less than 38.82% of C++ online submissions for Single Element in a Sorted Array.


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int res;
        int n = nums.size();
        
        if(n == 1){
            return nums[0];
        }
        
        if(nums[0]!= nums[1]){
            return nums[0];
        }
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1] && nums[i+1]!= nums[i]){
                res = nums[i];
                break;
            }
        }
        
        return res;
        
    }
};
