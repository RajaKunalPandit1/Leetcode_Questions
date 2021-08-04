Output Status:
Runtime: 20 ms, faster than 99.67% of C++ online submissions for Group Anagrams.
Memory Usage: 20.6 MB, less than 56.18% of C++ online submissions for Group Anagrams.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res;
               
        unordered_map<string,vector<string>> m;
        int n = strs.size();
        for(auto str: strs){
            string curr = str;
            sort(curr.begin(),curr.end());
            m[curr].push_back(str);
        }
        
        for(auto ans:m){
            res.push_back(ans.second);
        }
        return res;
        
    }
};

// Another Solution 

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>mpp;  
        for(string s : strs)
        {
            map<char,int>mpp2;
            for(char ch : s)
                mpp2[ch]++;
            mpp[mpp2].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto x : mpp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
