Output Status : 

Runtime: 38 ms, faster than 86.29% of C++ online submissions for Squares of a Sorted Array.
Memory Usage: 25.8 MB, less than 94.53% of C++ online submissions for Squares of a Sorted Array.
  

// Naive Solution :: Time : O(N*logN) :: Aux_Space : O(N)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> res;

        for(int i=0;i<n;i++){
            res.push_back(nums[i]*nums[i]);
        }
        sort(res.begin(),res.end());
        return res;
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(N)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     
        int n = nums.size();
        int low = 0,high = n-1;
        vector<int> res(n);
        int idx = n-1;
        
        while(low <= high && idx>=0){
            
            if(abs(nums[low]) < abs(nums[high])){
                
                res[idx] = nums[high] * nums[high];
                idx--;
                high--;
            }else{
                res[idx] = nums[low]*nums[low];
                low++;
                idx--;
            }
        }
        return res;
    }
};
