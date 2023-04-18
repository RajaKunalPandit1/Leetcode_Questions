Output Status : 

Runtime
0 ms
Beats
100%
Memory
6.4 MB
Beats
19.57%

class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        
        int n = s1.length();
        int m = s2.length();

        int i=0,j=0;
        string res = "";

        while(i < n && j < m){
            res += s1[i];
            res += s2[j];
            i++;
            j++;
        }

        while(i < n){
            res += s1[i];
            i++;
        }

        while(j < m){
            res += s2[j];
            j++;
        }
        return res;
    }
};
