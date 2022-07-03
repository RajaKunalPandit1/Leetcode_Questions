Output Status : 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Wiggle Subsequence.
Memory Usage: 7.1 MB, less than 43.94% of C++ online submissions for Wiggle Subsequence.


class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
     
        int n = nums.size();
        
        if(n<2){
            return 1;
        }
        
        int dec = 1,inc = 1;
        
        for(int i=1;i<n;i++){
            
            if(nums[i]> nums[i-1]){
                inc = dec + 1;
            }else if(nums[i] < nums[i-1]){
                dec = inc + 1;
            }
        }
        return max(inc,dec);
    }
};
