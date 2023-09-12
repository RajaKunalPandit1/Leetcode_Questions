Output Status : 

Runtime
54 ms
Beats
65.33%
Memory
17.3 MB
Beats
58%

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
