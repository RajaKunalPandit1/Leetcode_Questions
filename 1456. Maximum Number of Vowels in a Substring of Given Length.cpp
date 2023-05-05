Output Status : 

Runtime
46 ms
Beats
18.21%
Memory
10.2 MB
Beats
15.3%

class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0, counting = 0;
        unordered_set<char> bag = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0, local = 0; i < s.size(); i++) {
            local += bag.count(s[i]);
            if (i - k >= 0) local -= bag.count(s[i-k]);
            count = max(count, local);
        }
        return count;
    }
};
