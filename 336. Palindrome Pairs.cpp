Output Status : 

Runtime: 1001 ms, faster than 85.53% of C++ online submissions for Palindrome Pairs.
Memory Usage: 599.2 MB, less than 15.75% of C++ online submissions for Palindrome Pairs.


// Solution Using Hashmap 

class Solution {
public:
    
    bool isPalin(string str){
        
        int i=0;
        int j = str.size() - 1;
        
        while(i<j){
            if(str[i++] != str[j--]) return false;
        }
        return true;
    }
    
    
    vector<vector<int>> palindromePairs(vector<string>& words) {
        
        unordered_map<string,int> dict;
        vector<vector<int>> res;
        
        for(int i=0;i<words.size();i++){
            
            string key = words[i];
            reverse(key.begin(),key.end());
            dict[key] = i;
            
        }
        
        if(dict.find("") != dict.end()){
            
            for(int i=0;i<words.size();i++){
                if(i == dict[""]) continue;
                
                if(isPalin(words[i])){
                    res.push_back({dict[""],i});
                }
            }
        }
        
        for(int i=0;i<words.size();i++){
            
            for(int j=0;j<words[i].size();j++){
                
                string left = words[i].substr(0,j);
                string right = words[i].substr(j,words[i].size()-j);
                
                if(dict.find(left) != dict.end() && isPalin(right) && dict[left] != i){
                    res.push_back({i,dict[left]});
                }
                
                if(dict.find(right) != dict.end() && isPalin(left) && dict[right] != i){
                    res.push_back({dict[right],i});
                }
            }
        }
        return res;
    }
};

// Solution Using Trie

