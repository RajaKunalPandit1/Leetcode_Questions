Output Status : 

Runtime: 4 ms, faster than 64.51% of C++ online submissions for Make The String Great.
Memory Usage: 6.3 MB, less than 82.16% of C++ online submissions for Make The String Great.

class Solution {
public:
    string makeGood(string s) {
         string ans;
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            ans.push_back(s[i]);
            
            while(ans.size() && (ans.back()==s[i+1]+32 || ans.back()==s[i+1]-32))
            {
                ans.pop_back();
                i++;
            }
        }
        
        return ans;
    }
};
