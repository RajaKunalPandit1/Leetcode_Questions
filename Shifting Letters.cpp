Output Status:

Runtime: 291 ms, faster than 5.24% of C++ online submissions for Shifting Letters.
Memory Usage: 67.8 MB, less than 66.61% of C++ online submissions for Shifting Letters.


class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
         long long shift=0;
        for(int i=s.size()-1;i>=0;i--){
            s[i]=((s[i]-'a')+(shift+shifts[i]) % 26) % 26 +'a';
            shift+=shifts[i];
        }
        return s;
        
    }
};
