Output Status : 

Runtime
40 ms
Beats
37.75%
Memory
19.9 MB
Beats
60.44%

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
