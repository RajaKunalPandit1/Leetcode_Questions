Output Status:

Runtime: 20 ms, faster than 52.67% of C++ online submissions for Ransom Note.
Memory Usage: 8.9 MB, less than 13.87% of C++ online submissions for Ransom Note.


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> used;
        for(auto &i : magazine)
        {
            used[i]++;
        }
        for(int i = 0; i < ransomNote.length(); i++)
        {
            if(used[ransomNote[i]] > 0)
            {
                used[ransomNote[i]]--;
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
};
