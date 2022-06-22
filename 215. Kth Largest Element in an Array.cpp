Output Status : 

Runtime: 11 ms, faster than 65.84% of C++ online submissions for Kth Largest Element in an Array.
Memory Usage: 10.1 MB, less than 37.94% of C++ online submissions for Kth Largest Element in an Array.

// Time : O(NlogK) :: Aux_Space : O(1)

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int,vector<int>,greater<int>> pq;
        int res;
        
        for(auto i : nums){
            pq.push(i);
            if(pq.size() > k){
                pq.pop();
            }
        }
        
       return pq.top();
    }
};
