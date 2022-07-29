Output Status : 

92 / 92 test cases passed.
Status: Accepted
Runtime: 6 ms
Memory Usage: 6.3 MB
Submitted: 0 minutes ago


class Solution {
public:
    char repeatedCharacter(string s) {
        
        unordered_map<char,int> mp;
        int n = s.length();
        
        char res;
        
        for(int i=0;i<n;i++){
            
            mp[s[i]]++;
            if(mp[s[i]] > 1){
                res = s[i];
                break;
            }
        }
        return res;
    }
};
