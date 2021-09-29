Output Status:

Runtime: 20 ms, faster than 73.33% of C++ online submissions for Sort Array By Parity II.
Memory Usage: 21.5 MB, less than 30.56% of C++ online submissions for Sort Array By Parity II.



class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        
        int n = nums.size();
        
        int i=0,j=1;
        
        while(i<n && j<n){
            if(nums[i]%2 == 0){
                    i+=2;
            }else if(nums[j]%2!= 0){
                    j+=2;
            }else{
                swap(nums[i],nums[j]);
            }
        }
        return nums;
        
    }
};
