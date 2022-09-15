Output Status :

Runtime: 825 ms, faster than 31.25% of C++ online submissions for Find Original Array From Doubled Array.
Memory Usage: 146.5 MB, less than 35.65% of C++ online submissions for Find Original Array From Doubled Array.


class Solution {
public:
    vector<int> findOriginalArray(vector<int>& arr) {
        
        int n = arr.size();
        
        if(n%2) return {};
        
        unordered_map<int,int> mp;
        
        for(int a : arr) mp[a]++;
        
        vector<int> res;
        
        for(auto it: mp){
            res.push_back(it.first);
        }
        
        sort(res.begin(),res.end(), [](int i, int j){return abs(i) < abs(j);});
        
        vector<int> ans;
        
        for(int x: res){
            
            if(mp[x] > mp[2*x]) return {};
            
            for(int i=0;i<mp[x];i++,mp[2*x]--){
                ans.push_back(x);
            }
        }
        return ans;
    }
};
