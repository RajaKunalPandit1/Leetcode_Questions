Output Status: 

Runtime: 176 ms, faster than 98.68% of C++ online submissions for Minimize Deviation in Array.
Memory Usage: 71.4 MB, less than 58.94% of C++ online submissions for Minimize Deviation in Array.


class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        int N = nums.size();
        int maxx = INT_MIN, minn = INT_MAX;
        for(int i = 0; i < N; i++){
            if((nums[i])%2 != 0){
                nums[i] *= 2;
            }
            maxx = max(maxx, nums[i]);
            minn = min(minn, nums[i]);
        }
        int min_deviation = maxx - minn;
        
        // Step 2 :- Insert into max_heap and try to decrease the maxx as much as u can
        priority_queue<int>pq;
        for(int i = 0; i < N; i++){
            pq.push(nums[i]);
        }
        
        while((pq.top())%2 == 0){
            int top = pq.top(); pq.pop();
            min_deviation = min(min_deviation, top - minn);
            top /= 2;
            minn = min(minn, top);
            pq.push(top);
        }
        min_deviation = min(min_deviation, pq.top() - minn);
        
        // Step 3 :- return maxx - minn;
        return min_deviation  ;
        
    }
};
