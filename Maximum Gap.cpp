class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        int res=0;
        int n=nums.size();
        if(n==1){
            return res;
        }
        
        sort(nums.begin(),nums.end());
        res = nums[1] - nums[0];
        for(int i=2;i<n;i++){
            res = max(res,nums[i]-nums[i-1]);
        }
        return res;
        
        
    }
};

// Another Soluion

/* 
This solution is done with the help of Pigeonhole Principle
*/

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int size=nums.size();
        if(size<2){
            return  0;
        }
        int minval=nums[0];
        int maxval=0;
        
        for(int i=0;i<size;i++){
            minval=min(minval,nums[i]);
            maxval=max(maxval,nums[i]);
        }
        
        int interval = (int)ceil((maxval - minval + 0.0) / (size - 1));
        
        vector<int> minBucket(size-1,INT_MAX);
        vector<int> maxBucket(size-1,-1);
        
        for(int i=0;i<size;i++){
            if(nums[i]==minval || nums[i]==maxval){
                continue;
            }
            
            int index = (nums[i]-minval)/interval;
            minBucket[index]=min(minBucket[index],nums[i]);
            maxBucket[index]=max(maxBucket[index],nums[i]);
        }
        int prev=minval;
        int ans=0;
        for(int i=0;i<size-1;i++){
            if(minBucket[i] == INT_MAX || maxBucket[i] == -1 ){
                continue;
            }
            ans = max(minBucket[i]-prev,ans);
            prev=maxBucket[i];
        }
        ans=max(maxval-prev,ans);
        return ans;
    }
};


// Another Solution

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) return 0;
        int hi = 0, lo = INT_MAX, ans = 0;
        for (auto& n : nums)
            hi = max(hi, n), lo = min(lo, n);
        int bsize = max(int((hi - lo) / (nums.size() - 1)), 1);
        vector<vector<int>> buckets((hi - lo) / bsize + 1, vector<int>());
        for (auto& n : nums)
            buckets[(n - lo) / bsize].push_back(n);
        int currhi = 0;
        for (auto& b : buckets) {
            if (b.empty()) continue;
            int prevhi = currhi ? currhi : b[0], currlo = b[0];
            for (auto& n : b)
                currhi = max(currhi, n), currlo = min(currlo, n);
            ans = max(ans, currlo - prevhi);
        }
        return ans;
    }
};
