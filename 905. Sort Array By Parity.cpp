Output Status: 

Runtime: 19 ms, faster than 28.13% of C++ online submissions for Sort Array By Parity.
Memory Usage: 16.3 MB, less than 57.28% of C++ online submissions for Sort Array By Parity.


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();
        
        int j=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
        return nums;
    }
};
