Output Status:

Runtime: 151 ms, faster than 19.27% of C++ online submissions for Maximum Subarray.
Memory Usage: 67.6 MB, less than 99.84% of C++ online submissions for Maximum Subarray.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int res = INT_MIN;
        int count = 0;
        
        for(int i=0;i<n;i++){
            count = count + nums[i];
            res = max(res,count);
            
            if(count<0){
                count = 0;
            }
            
        }
        return res;
        
    }
};
