Output Status : 

Runtime: 14 ms, faster than 9.09% of C++ online submissions for Find and Replace Pattern.
Memory Usage: 8.5 MB, less than 43.97% of C++ online submissions for Find and Replace Pattern.

// Using 2 Maps :: Time : O(N*L), where N is the number of words and L is the length of each word. :: Aux_Space : O(N*L)

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> res;
        
        int n = words.size(),m = pattern.size();
        
        for(int i=0;i<n;i++){
            
            if(words[i].size() == m){
                
             unordered_map<char,char> mp1;
             unordered_map<char,char> mp2;
             bool flag = true; 
                
                for(int j=0;j<m;j++){
                    
                    auto it1 = mp1.find(pattern[j]);
                    auto it2 = mp2.find(words[i][j]);
                    
                    if(it1 == mp1.end()){
                        mp1.insert({pattern[j],words[i][j]});
                    }else{
                        if(it1->second != words[i][j]){
                            flag = false;
                            break;
                        }
                    }
                    
                    if(it2 == mp2.end()){
                        mp2.insert({words[i][j],pattern[j]});
                    }else{
                        if(it2->second != pattern[j]){
                            flag = false;
                            break;
                        }
                    }
                }
                
                if(flag){
                    res.push_back(words[i]);
                }
            }
        }
        return res;
    }
};

// Another Solution Using One Map :: Time : O(N*L) :: Aux_Space : O(N*L)

class Solution {
public:
    
    bool isValid(string str1, string str2){
        
        int n = str1.size();
        
        unordered_map<char,char> mp;
        vector<bool> isVisited(26,false);
        
        for(int i=0;i<n;i++){
            
            char c1 = str1[i],c2 = str2[i];
            
            if(mp[c1] && mp[c1] != c2) return false;
            if(!mp[c1] && isVisited[c2-'a']) return false;
            
            mp[c1] = c2,isVisited[c2-'a'] = true;
        }
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> res;
        
        for(auto w : words){
            if(isValid(w,pattern)) res.push_back(w);
        }
        return res;
    }
};

// Another Solution By Normalizing :: Time : O(N*L) :: Aux_Space : O(N*L)

class Solution {
public:
    
    string normalize(string str){
        
        unordered_map<char,char> mp;
        char c = 'a';
        
        for(auto x : str){
            if(!mp.count(x)) mp[x] = c++;
        }
        
        for(auto &ch : str) ch = mp[ch];
        return str;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> res;
        
        string p = normalize(pattern);
        
        for(auto &s : words){
            if(p == normalize(s)) res.push_back(s);
        }
        return res;
    }
};
