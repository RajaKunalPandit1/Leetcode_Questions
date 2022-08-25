Output Status : 

Runtime: 15 ms, faster than 84.13% of C++ online submissions for Ransom Note.
Memory Usage: 8.9 MB, less than 39.49% of C++ online submissions for Ransom Note.


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int m = magazine.length();
        int n = ransomNote.length();
        
        unordered_map<char,int> mp;
        
        for(auto x: magazine){
            mp[x]++;
        }
        
        for(auto x: ransomNote){
            if(mp[x] <= 0){
                return false;
            }else{
                mp[x]--;
            }
        }
        return true;
    }
};
