Output Status : 

Runtime
61 ms
Beats
74.15%
Memory
45 MB
Beats
72.67%

class TrieNode {
public:
	// next array to connect other nodes
    TrieNode* next[26];
    // bool to mark end of word
	bool isEnd;
    
    TrieNode(bool b = false) {
        memset(next,0,sizeof(next));
        isEnd = b;
    }
};

// actual trie
class Trie {
	// private root
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
	// TC O(n) | SC O(n) | Aux O(1)
    void insert(string word) {
        TrieNode* curr = root;
        for(int idx = 0; idx < word.length(); idx++) {
            if(curr->next[word[idx]-'a'] == nullptr)
                curr->next[word[idx]-'a'] = new TrieNode();
            curr = curr->next[word[idx]-'a'];
        }
        curr->isEnd = true;
    }
    
	// TC O(n) | SC O(n) | Aux O(1)
    bool search(string word) {
        TrieNode* curr = root;
        for(int idx = 0; idx < word.length(); idx++) {
            if(curr->next[word[idx]-'a'] == nullptr)
                return false;
            curr = curr->next[word[idx]-'a'];
        }
        return curr->isEnd == true;
    }
    
	// TC O(n) | SC O(n) | Aux O(1)
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(int idx = 0; idx < prefix.length(); idx++) {
            if(curr->next[prefix[idx]-'a'] == nullptr)
                return false;
            curr=curr->next[prefix[idx]-'a'];
        }
        return true;
    }
};
/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
