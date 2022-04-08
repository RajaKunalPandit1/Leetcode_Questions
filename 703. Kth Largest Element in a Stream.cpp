Output Status: 

Runtime: 64 ms, faster than 22.57% of C++ online submissions for Kth Largest Element in a Stream.
Memory Usage: 19.8 MB, less than 63.09% of C++ online submissions for Kth Largest Element in a Stream

Question Link - https://leetcode.com/problems/kth-largest-element-in-a-stream/ 

class KthLargest {
public:
    
    priority_queue<int,vector<int>,greater<int>> minHeap;
    int currk;
    
    KthLargest(int k, vector<int>& nums) {
        
        int n = nums.size();
        currk = k;
        
        for(int i=0;i<n;i++){
            add(nums[i]);
        }
        
    }
    
    int add(int val) {
        
        if(minHeap.size() < currk){
            minHeap.push(val);
        }else{
            if(val > minHeap.top()){
                minHeap.pop();
                minHeap.push(val);
            }
        }
        return minHeap.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
