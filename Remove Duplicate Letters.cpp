Output Status: 

Runtime: 4 ms, faster than 61.69% of C++ online submissions for Remove Duplicate Letters.
Memory Usage: 6.7 MB, less than 66.29% of C++ online submissions for Remove Duplicate Letters.

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> dict(256,0);
        vector<bool> vis(256,false);
        
        for(auto &c:s)dict[c]++;
        string res = "";
        for(auto &c:s){
            dict[c]--;
            if(vis[c])continue;
            
            while(!res.empty() && res.back()>c && dict[res.back()]!=0){
                vis[res.back()]=false;
                res.pop_back();
            }
            vis[c] = true;
            res += c;
        }
        return res;
        
    }
};
