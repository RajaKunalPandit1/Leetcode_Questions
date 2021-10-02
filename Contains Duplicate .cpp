Output Status:

Runtime: 48 ms, faster than 28.41% of C++ online submissions for Contains Duplicate.
Memory Usage: 15.5 MB, less than 93.84% of C++ online submissions for Contains Duplicate.


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        bool flag = false;
        
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                flag = true;
                break;
            }
        }
        return flag;
    }
};
