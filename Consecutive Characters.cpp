Output Status : 

Runtime: 4 ms, faster than 70.90% of C++ online submissions for Consecutive Characters.
Memory Usage: 6.8 MB, less than 72.13% of C++ online submissions for Consecutive Characters.


class Solution {
public:
    int maxPower(string s) {
        int res =1,temp = 1;
        int n = s.length();
        
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                temp++;
                res = max(res,temp);
            }else{
                temp = 1;
            }
        }
        return res;
    }
};

// Another Solution 


class Solution {
public:
    int maxPower(string s) {
        // support variables
        int res = 0, i = 0, j, len = s.size(), curr = s[0];
        while (i < len) {
            // updating j
            j = i + 1;
            // moving j to the first value of s[j] != curr
            while (j < len && curr == s[j]) j++;
            // updating res
            res = max(res, j - i);
            // setting curr and i for the next loop
            curr = s[j];
            i = j;
        }
        return res;
    }
};

