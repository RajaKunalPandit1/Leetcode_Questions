Output Status:

Runtime: 32 ms, faster than 82.03% of C++ online submissions for Max Consecutive Ones.
Memory Usage: 36 MB, less than 95.65% of C++ online submissions for Max Consecutive Ones.


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     
        int n = nums.size();
        
        int count = 0,res = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                count++;
                res = max(res,count);
            }else{
                count = 0;
            }
        }
        return res;
        
    }
};

