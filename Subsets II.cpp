Output Status:
Runtime: 4 ms, faster than 76.59% of C++ online submissions for Subsets II.
Memory Usage: 7.4 MB, less than 94.97% of C++ online submissions for Subsets II.

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> res = {{}};
        vector<int> curr;
        int size;
        
        for (auto num : nums) {
            size = res.size();
            
            for (int i = 0; i < size; i++) {
                curr = res[i];
                curr.push_back(num);
                if (find(res.begin(), res.end(), curr) == res.end())
                    res.push_back(curr);
            }
        }
        
        return res;
    }
};

// Another Solution 

class Solution {
public:
    typedef long long ll;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> > v; set<vector<int> > s;
        int n=nums.size();
        int mx=(1<<n)-1; 
        for(int i=0;i<=mx;i++) {
            vector<int> res; vector<int> freq(21,0);
            for(int j=0;j<n;j++) {
                if(i & (1<<j)) { res.push_back(nums[j]); freq[nums[j]+10]++; }
            }
            if(s.find(freq)==s.end()) {
                s.insert(freq); v.push_back(res);
            }
        }
        return v;
    }
};

// Another Solution 

class Solution {
public:
  vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans = {{}};
    
    map<int,int> mp;
    for(auto &n: nums) mp[n]++;
    
    for(auto &it:mp){
      int id = ans.size();
      for(int j = 0; j != it.second; j++)
        for(int w = 0; w != id; w++){
          ans.push_back(ans[w]);
          for(int k = 0; k <= j; k++)
            ans.back().push_back(it.first);
        }
    }
    
    return ans;
  }
};
