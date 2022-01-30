Output Status: 

Runtime: 53 ms, faster than 23.40% of C++ online submissions for Rotate Array.
Memory Usage: 25 MB, less than 81.49% of C++ online submissions for Rotate Array.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        k=k%n;
        
        reverse(nums.end()-k,nums.end()); 
        reverse(nums.begin(),nums.end()-k); //reverse nums[0] to nums[n-k-1]
        reverse(nums.begin(),nums.end());  //reverse complete array
        
    }
};
