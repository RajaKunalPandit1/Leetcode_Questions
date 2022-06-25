Output Status : 

Runtime: 30 ms, faster than 85.25% of C++ online submissions for Non-decreasing Array.
Memory Usage: 27.1 MB, less than 53.59% of C++ online submissions for Non-decreasing Array.


// Time : O(N) :: Aux_Space : O(1)

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        int n = nums.size();
        
        int idx = -1;
        
        for(int i=0;i<n-1;i++){
            if(nums[i] > nums[i+1]){
                if(idx!= -1){
                    return false;
                }
                idx = i;
            }
        }
        
        return (idx == -1 || idx == 0 || idx == n-2 || nums[idx-1] <= nums[idx+1] || nums[idx] <= nums[idx+2]);
        
        
    }
};
