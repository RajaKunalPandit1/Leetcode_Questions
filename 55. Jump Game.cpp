Output Status : 

Runtime
107 ms
Beats
70.57%
Memory
48.4 MB
Beats
79.88%
  
  class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();

        int minjumps = 0;

        for(int i=n-2;i<=0;i--){
            minjumps++;
            if(nums[i] >= minjumps){
                minjumps = 0;
            }
        }
        return (minjumps == 0);
    }
};
