Output Status: 

Runtime: 16 ms, faster than 96.90% of C++ online submissions for Product of Array Except Self.
Memory Usage: 24.1 MB, less than 55.79% of C++ online submissions for Product of Array Except Self.


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n=nums.size();
        int fromBegin=1;
        int fromLast=1;
        vector<int> res(n,1);
        
        for(int i=0;i<n;i++){
            res[i]*=fromBegin;
            fromBegin*=nums[i];
            res[n-1-i]*=fromLast;
            fromLast*=nums[n-1-i];
        }
        return res;
    }
};
