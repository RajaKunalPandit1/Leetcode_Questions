Output Status : 

Runtime
335 ms
Beats
42.15%
Memory
134.5 MB
Beats
89.70%

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int n = nums.size();
        deque<int> q;
        vector<int> res;

        for(int i=0;i<k;i++){

            while(!q.empty() && nums[q.back()] <= nums[i]){
                q.pop_back();
            }
            q.push_back(i);
        }

        for(int i=k;i<n;i++){

            res.push_back(nums[q.front()]);

            while(!q.empty() && q.front() <= i-k){
                q.pop_front();
            }

            while(!q.empty() && nums[q.back()] <= nums[i]){
                q.pop_back();
            }
            q.push_back(i);
        }  
        res.push_back(nums[q.front()]);
        return res;
    }
};
