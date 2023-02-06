Output Status : 

Runtime
7 ms
Beats
62.32%
Memory
9.8 MB
Beats
31.98%
  

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
      vector<int> res;

      for(int i=0;i<n;i++){
        res.push_back(nums[i]);
        res.push_back(nums[n+i]);
      }
      return res;
    }
};
