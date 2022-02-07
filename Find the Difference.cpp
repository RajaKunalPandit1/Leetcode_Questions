Output Status: 

Runtime: 4 ms, faster than 67.41% of C++ online submissions for Find the Difference.
Memory Usage: 6.9 MB, less than 9.15% of C++ online submissions for Find the Difference.


  
class Solution {
public:
    char findTheDifference(string s, string t) {
        
        map<char,int> mp;
        
        char res;
        
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            if(mp[t[i]] >= 1){
                mp[t[i]]--;
            }else if(mp[t[i]] <= 0){
                res = t[i];
                break;
            }
        }
        
        return res;
    }
};

// Another Solution

char findTheDifference(string s, string t) {
        char v = 0;
        for (char c: s) v ^= c;
        for (char c: t) v ^= c;
        return v;
    }
