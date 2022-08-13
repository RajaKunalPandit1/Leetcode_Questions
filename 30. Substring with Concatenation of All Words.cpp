Output Status : 

Runtime: 243 ms, faster than 74.34% of C++ online submissions for Substring with Concatenation of All Words.
Memory Usage: 24.8 MB, less than 57.52% of C++ online submissions for Substring with Concatenation of All Words.

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        int len = words[0].size();
        int wordsSize = words.size();
        
        vector<int> res;
        unordered_map<string,int> mp;
        
        if(len*wordsSize > s.length()) return res;
        
        for(auto word : words){
            mp[word]++;
        }
        
        for(int i=0;i<=s.length()-(wordsSize*len);i++){
            
            unordered_map<string,int> wordUsed;
            
            for(int j=i;j<i+(wordsSize*len);j+=len){
                string cur = s.substr(j,len);
                
                if(mp.find(cur) == mp.end()) break;
                
                wordUsed[cur]++;
                
                if(wordUsed[cur] > mp[cur]) break;
            }
            if(wordUsed == mp) res.push_back(i);
        }
        return res;
    }
};
