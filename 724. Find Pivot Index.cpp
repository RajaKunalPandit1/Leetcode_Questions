Output Status : 

Runtime
25 ms
Beats
71.96%
Memory
31.1 MB
Beats
81.95%


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;

        for(int i=0;i<n;i++) sum += nums[i];

        int l_sum = 0;

        for(int i=0;i<n;i++){

            if(l_sum == sum-nums[i]){
                return i;
            }
            l_sum += nums[i];
            sum -= nums[i];
        }
        return -1;
    }
};
