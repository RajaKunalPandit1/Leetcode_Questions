Output Status : 

Runtime: 92 ms, faster than 29.13% of C++ online submissions for Group Anagrams.
Memory Usage: 20.7 MB, less than 41.59% of C++ online submissions for Group Anagrams.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        
        int n = strs.size();
        
        unordered_map<string,vector<string>> mp;
        
        for(auto str :strs){
            string curr = str;
            sort(curr.begin(),curr.end());
            mp[curr].push_back(str);
        }
        
        for(auto ans: mp){
            res.push_back(ans.second);
        }
        return res;
    }
};
