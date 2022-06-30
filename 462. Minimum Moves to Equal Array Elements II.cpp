Output Status: 

Runtime: 12 ms, faster than 81.15% of C++ online submissions for Minimum Moves to Equal Array Elements II.
Memory Usage: 11 MB, less than 15.75% of C++ online submissions for Minimum Moves to Equal Array Elements II.

  
  class Solution {
public:
    int minMoves2(vector<int>& nums) {
     
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        int start = 0,end = n-1;
        
        int res = 0;
        
        while(start<end){
            
            res += abs(nums[end]-nums[start]);
            start++;
            end--;
        }
        return res;
        
    }
};
