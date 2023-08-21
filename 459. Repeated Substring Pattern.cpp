Output Status : 

Runtime
12 ms
Beats
92.74%
Memory
13.4 MB
Beats
69.91%

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        return (s + s).substr(1, 2*s.size()-2).find(s) != -1;
    }
};
