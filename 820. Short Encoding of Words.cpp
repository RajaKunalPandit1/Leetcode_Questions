Output Status: 

Runtime: 173 ms, faster than 27.23% of C++ online submissions for Short Encoding of Words.
Memory Usage: 23 MB, less than 63.86% of C++ online submissions for Short Encoding of Words.


class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
     
        set<string> s1(words.begin(),words.end());
        set<string> s2(words.begin(),words.end());
        
        int res = 0;
        
        for(auto parts: s1){
            
            for(int i=1;i<parts.size();i++){
                s2.erase(parts.substr(i));
            }
        }
        
        for(auto parts: s2){
            res += parts.length() + 1;
        }
        return res;
    }
};

// Trie Solution 

class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        TrieNode *root = new TrieNode;
        vector<pair<TrieNode *, int>> leaves;
        for (auto & w : unordered_set<string> (words.begin(), words.end())) {
            TrieNode *cur = root;
            for (int i = w.length() - 1; i >= 0; --i) {
                if (cur->next.count(w[i]) == 0) cur->next[w[i]] = new TrieNode;
                cur = cur->next[w[i]];
            }
            leaves.push_back(make_pair(cur, w.length() + 1));
        }
        int res = 0;
        for (auto leaf : leaves) if ((leaf.first->next).size() == 0) res += leaf.second;
        return res;
    }
};
