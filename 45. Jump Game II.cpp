Output Status : 

Runtime
17 ms
Beats
73.2%
Memory
16.6 MB
Beats
84.26%

class Solution {
public:
    int jump(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
        nums[i] = max(nums[i] + i, nums[i-1]);
      }

      int ind = 0;
      int ans = 0;

      while(ind < nums.size() - 1){
        ans++;
        ind = nums[ind];
      }
      return ans;
    }
};
