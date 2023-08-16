Output Status : 

Runtime
210 ms
Beats
84.82%
Memory
134.9 MB
Beats
36.59%

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> res;

        int n = nums.size();
        deque<int> dq;

        for(int i=0;i<k;i++){

            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        for(int i=k;i<n;i++){

            res.push_back(nums[dq.front()]);

            while(!dq.empty() && dq.front() <= i-k){
                dq.pop_front();
            }

            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);
        return res;
    }
};
