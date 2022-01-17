Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Word Pattern.
Memory Usage: 6.7 MB, less than 18.34% of C++ online submissions for Word Pattern.


class Solution {
public:
     bool wordPattern(string pattern, string s) {
        string x;
        vector <string> v;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){                                       // v will hold all string in string s
                v.push_back(x);
                x.erase();
            }
            else{
                x.push_back(s[i]);
            } 
        }
        v.push_back(x);
        if(v.size()!=pattern.length()){                //if strings in s is not equal to pattern length
            return 0;
        }
        else{
            map <char,vector<int>> mp1;           //this map for pattern string in which character will mapped with its index
            map <string,vector<int>> mp2;          //this map for vector strings in which string will mapped with its index           
            for(int i=0;i<pattern.length();i++){
                mp1[pattern[i]].push_back(i);
            }
            for(int i=0;i<v.size();i++){
                mp2[v[i]].push_back(i);
            }
            if(mp1.size()!=mp2.size())            
                return 0;
            for(int i=0;i<mp1.size();i++){
                if(mp1[pattern[i]]!=mp2[v[i]])
                    return 0;
            }
            return 1;
        }
    }
};
