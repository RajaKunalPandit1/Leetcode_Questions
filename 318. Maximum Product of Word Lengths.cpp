Output Status: 

Runtime: 49 ms, faster than 85.86% of C++ online submissions for Maximum Product of Word Lengths.
Memory Usage: 15.7 MB, less than 79.69% of C++ online submissions for Maximum Product of Word Lengths.

class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int> mask(words.size());
    int result = 0;
    for (int i=0; i<words.size(); ++i) {
        for (char c : words[i])
            mask[i] |= 1 << (c - 'a');
        for (int j=0; j<i; ++j)
            if (!(mask[i] & mask[j]))
                result = max(result, int(words[i].size() * words[j].size()));
    }
    return result;
    }
};

