Output Status:

Runtime: 78 ms, faster than 6.28% of C++ online submissions for Squares of a Sorted Array.
Memory Usage: 27 MB, less than 16.75% of C++ online submissions for Squares of a Sorted Array.


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> res;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            res.push_back(abs(nums[i]*nums[i]));
        }
        
        sort(res.begin(),res.end());
        return res;
        
    }
};
