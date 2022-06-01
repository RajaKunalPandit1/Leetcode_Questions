Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Running Sum of 1d Array.
Memory Usage: 8.5 MB, less than 75.18% of C++ online submissions for Running Sum of 1d Array.


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int n = nums.size();
        
        int var = 0;
        
        for(int i=0;i<n;i++){
            var+= nums[i];
            nums[i] = var;
        }
        return nums;
    }
};

// Another Solution using STL

vector<int> runningSum(vector<int>& nums) {
    partial_sum(begin(nums), end(nums), begin(nums));
    return nums;
}
