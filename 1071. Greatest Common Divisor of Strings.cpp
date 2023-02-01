Output Status : 

Runtime
0 ms
Beats
100%
Memory
7.2 MB
Beats
65.71%

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, gcd(size(str1),size(str2))): "";
    }
};

