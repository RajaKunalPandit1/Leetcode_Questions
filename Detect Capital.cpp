Output Status: 


Runtime: 3 ms, faster than 39.46% of C++ online submissions for Detect Capital.
Memory Usage: 6.1 MB, less than 67.65% of C++ online submissions for Detect Capital.

class Solution {
public:
    bool detectCapitalUse(string word) {
        bool firstCaps = isupper(word[0]), allCaps = true, allSmall = true;
        for(int i=1;i<word.size();i++){
            if(isupper(word[i])){
                allSmall = false;
            }else{
                allCaps = false;
            }
        }
        return ( firstCaps && allCaps) || allSmall ;
    }
};
