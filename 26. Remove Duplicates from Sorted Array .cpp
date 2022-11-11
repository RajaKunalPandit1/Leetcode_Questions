Output Status : 

Runtime: 20 ms, faster than 71.10% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 18.5 MB, less than 37.30% of C++ online submissions for Remove Duplicates from Sorted Array.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int i=0,j=1;
        
        while(i<n && j<n){
            
            if(nums[i] == nums[j]){
                j++;
            }else{
                i++;
                nums[i] = nums[j];
                j++;
            }
        }
        return (i+1);
    }
};
