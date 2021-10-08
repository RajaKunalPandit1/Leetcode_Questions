Output Status:

Runtime: 48 ms, faster than 94.66% of C++ online submissions for Implement Trie (Prefix Tree).
Memory Usage: 45 MB, less than 64.50% of C++ online submissions for Implement Trie (Prefix Tree).


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
