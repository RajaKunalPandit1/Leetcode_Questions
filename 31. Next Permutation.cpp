Output Status: 

Runtime: 3 ms, faster than 87.24% of C++ online submissions for Next Permutation.
Memory Usage: 12.2 MB, less than 37.25% of C++ online submissions for Next Permutation.


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size(),k,l;
        
        for(k=n-2;k>=0;k--){
            
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        
        if(k<0){
            
            reverse(nums.begin(),nums.end());
        }else{
            for(l = n-1;l>k;l--){
                
                if(nums[l] > nums[k]){
                    break;
                }
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+k+1,nums.end());
        }
        
    }
};
