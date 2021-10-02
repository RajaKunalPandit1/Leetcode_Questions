Output Status:

Runtime: 222 ms, faster than 5.01% of C++ online submissions for Maximum Subarray.
Memory Usage: 67.7 MB, less than 9.43% of C++ online submissions for Maximum Subarray.


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
