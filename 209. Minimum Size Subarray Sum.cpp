Output Status : 

Runtime
45 ms
Beats
47.72%
Memory
28.1 MB
Beats
71.68%

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();

        int res = INT_MAX;
        int low = 0,curr_sum = 0;

        for(int i=0;i<n;i++){

            curr_sum += nums[i];

            while(low <= i && curr_sum >= target){

                res = min(res,i-low+1);
                curr_sum -= nums[low];
                low++;
            }
        }

        if(res == INT_MAX) return 0;

        return res;
    }
};
