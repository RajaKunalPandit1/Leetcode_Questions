Output Status : 

Runtime: 90 ms, faster than 21.33% of C++ online submissions for Largest Perimeter Triangle.
Memory Usage: 22 MB, less than 22.88% of C++ online submissions for Largest Perimeter Triangle.


  class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=n-1;i>1;i--){
            if(nums[i] < nums[i-1]+nums[i-2]){
                return nums[i] + nums[i-1] + nums[i-2];
            }
        }
        return 0;
    }
};
