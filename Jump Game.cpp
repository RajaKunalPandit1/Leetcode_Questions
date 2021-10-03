Output Status:

Runtime: 107 ms, faster than 29.56% of C++ online submissions for Jump Game.
Memory Usage: 48.4 MB, less than 49.19% of C++ online submissions for Jump Game.


class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int minjump = 0;
        for(int i=nums.size()-2;i>=0;i--){
            minjump++;
            if(nums[i]>=minjump){
                minjump=0;
            }
        }
        return minjump==0;
        
    }
};
