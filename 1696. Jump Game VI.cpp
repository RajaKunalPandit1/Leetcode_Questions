Output Status : 

Runtime: 242 ms, faster than 74.64% of C++ online submissions for Jump Game VI.
Memory Usage: 77.3 MB, less than 99.05% of C++ online submissions for Jump Game VI.

class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        
        deque<int> d{0};
        
        for(int i=1;i<nums.size();i++){
            
            if(d.front() + k < i){
                d.pop_front();
            }
            
            nums[i] += nums[d.front()];
            
            while(!d.empty() && nums[d.back()] <= nums[i])
                d.pop_back();
            d.push_back(i);
        }
        
        return nums.back();
    }
};
