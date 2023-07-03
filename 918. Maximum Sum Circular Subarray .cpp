Output Status : 

Runtime
63 ms
Beats
88.83%
Memory
42.7 MB
Beats
9.92%

class Solution {
public:

    int kadanes(vector<int> arr){

        int res = arr[0],curr = arr[0];
        int n = arr.size();

        for(int i=1;i<n;i++){

            curr = max(curr+arr[i],arr[i]);
            res = max(res,curr);
        }
        return res;
    }

    int maxSubarraySumCircular(vector<int>& nums) {

        int res = 0;

        int n = nums.size();

        res = kadanes(nums);

        if(res < 0){
            return res;
        }

        int sum = 0;

        for(int i=0;i<n;i++){
            sum += nums[i];
            nums[i] = -nums[i];
        }

        int modified_sum = kadanes(nums);

        int temp = sum + modified_sum;

        res = max(res,temp);
        return res;
    }
};
