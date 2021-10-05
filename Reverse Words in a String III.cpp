Output Status:

Runtime: 16 ms, faster than 72.58% of C++ online submissions for Reverse Words in a String III.
Memory Usage: 9.7 MB, less than 75.22% of C++ online submissions for Reverse Words in a String III.


class Solution {
public:
    string reverseWords(string s) {
     
        int l{0};
        int n = s.size();
        int r{0};
        int t{0};
        
        while(r <= n) {
            if((s[r] == ' ') || s[r] == s[n]) {
                t = r-1;
                while(l <= t) {
                    char k = s[l];
                    s[l++] = s[t];
                    s[t--] = k;
                }
                l = r+1;
            }
            r++;
        }
        return s;
        
    }
};
