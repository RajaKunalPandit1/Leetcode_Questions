Output Status : 

Runtime
3 ms
Beats
83.94%
Memory
12.3 MB
Beats
90.53%

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
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
