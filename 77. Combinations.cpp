Output Status : 

Runtime
16 ms
Beats
88.92%
Memory
9.8 MB
Beats
56.99%

class Solution {
public:
   vector<vector<int>>ans;
    void helper(vector<int> &nums,int src,int n, int k, vector<int> &temp)
    {   if (k==0)
        {
            ans.push_back(temp);
            return ;
        }
        if(src>n) return;
        temp.push_back(nums[src]);
        helper(nums,src+1,n,k-1,temp);
        temp.pop_back();
        helper(nums,src+1,n,k,temp);
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>temp;
        vector<int>nums;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
        helper(nums,0,n-1, k, temp);
        return ans;
    }
};
