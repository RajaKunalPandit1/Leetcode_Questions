Output Status:

Runtime: 8 ms, faster than 80.06% of C++ online submissions for Permutation in String.
Memory Usage: 7.2 MB, less than 91.08% of C++ online submissions for Permutation in String.


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
          if (s2.length() < s1.length()) {
            return false;
        }
        vector<int> table(26, 0), temp(26, 0);
        for(char c: s1){
           table[c-'a']++;
        }
        for(int j=0;j<s2.length();j++){
            if(j >= s1.length()) {
                temp[s2[j-s1.length()]-'a']--;
            }
            temp[s2[j]-'a']++;
            if(table == temp){
                return true;
            }
        }
        return false;
        
    }
};
