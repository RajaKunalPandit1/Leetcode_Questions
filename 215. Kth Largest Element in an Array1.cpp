Output Status : 

Runtime
84 ms
Beats
88.31%
Memory
47.2 MB
Beats
66.40%

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int n = nums.size();

        priority_queue<int,vector<int>,greater<int>> pq;

        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }

        for(int i=k;i<n;i++){
            
            if(pq.top() < nums[i]){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};
