class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            
            res.push_back(nums[i]*nums[i]);
            
        }
        sort(res.begin(),res.end());
        return res;
        
        
    }
};

// Another Solution Using 2 pointers

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res(A.size());
        int l = 0, r = A.size() - 1;
        for (int k = A.size() - 1; k >= 0; k--) {
            if (abs(A[r]) > abs(A[l])) res[k] = A[r] * A[r--];
            else res[k] = A[l] * A[l++];
        }
        return res;
    }
};

// Another Solution Using While Loop

  vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int start=0;
        int end=n-1;
        
        vector <int> res(n);
        int pos = n-1;
        
        while(start <= end)
        {
            if(abs(nums[start]) < abs(nums[end])) {
                res[pos--] = nums[end] * nums[end];
                end--;
            } else{
                res[pos--] = nums[start] * nums[start];
                start++;
            }
        }
        
        return res;
    }
