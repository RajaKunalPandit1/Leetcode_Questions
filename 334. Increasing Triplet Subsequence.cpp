Output Status : 

Runtime: 67 ms, faster than 97.28% of C++ online submissions for Increasing Triplet Subsequence.
Memory Usage: 61.6 MB, less than 24.04% of C++ online submissions for Increasing Triplet Subsequence.


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int n = nums.size();
        
        int num1 = INT_MAX, num2 = INT_MAX;
        
        for(int i=0;i<n;i++){
            
            if(num1 > nums[i]){
                num1 = nums[i];
            }else if(num2 > nums[i] && num1 < nums[i]){
                num2 = nums[i];
            }else if(num2 < nums[i]){
                return true;
            }
        }
        return false;
    }
};
