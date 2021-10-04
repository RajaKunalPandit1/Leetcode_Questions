Output Status:

Runtime: 27 ms, faster than 10.15% of C++ online submissions for Move Zeroes.
Memory Usage: 19.3 MB, less than 11.10% of C++ online submissions for Move Zeroes.
  
  
  class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        
        int low=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[low]);
                low++;
            }
        }
        
        for(int i=low;i<n;i++){
            nums[i] = 0;
        }
        
        
        
    }
};
