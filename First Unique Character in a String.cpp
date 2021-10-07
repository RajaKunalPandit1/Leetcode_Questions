Output Status:

Runtime: 44 ms, faster than 51.87% of C++ online submissions for First Unique Character in a String.
Memory Usage: 10.7 MB, less than 40.90% of C++ online submissions for First Unique Character in a String.



class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> freq;
        for(auto &i : s)
        {
            freq[i]++;
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(freq[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
        
    }
};
