Output Status :

Runtime: 54 ms, faster than 91.97% of C++ online submissions for Minimum Deletions to Make Character Frequencies Unique.
Memory Usage: 17.5 MB, less than 37.46% of C++ online submissions for Minimum Deletions to Make Character Frequencies Unique

class Solution {
public:
    int minDeletions(string s) {
        
    int cnt[26] = {}, res = 0;
    unordered_set<int> used;
    for (char ch : s)
        ++cnt[ch - 'a'];
    for (int i = 0; i < 26; ++i)
        for (; cnt[i] > 0 && !used.insert(cnt[i]).second; --cnt[i])
            ++res;
    return res;

    }
};
