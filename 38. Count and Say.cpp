Output Status : 

Runtime: 12 ms, faster than 66.00% of C++ online submissions for Count and Say.
Memory Usage: 6.7 MB, less than 42.61% of C++ online submissions for Count and Say.

  class Solution {
public:
    string countAndSay(int n) {
         if (n == 0) return "";
    string res = "1";
    while (--n) {
        string cur = "";
        for (int i = 0; i < res.size(); i++) {
            int count = 1;
             while ((i + 1 < res.size()) && (res[i] == res[i + 1])){
                count++;    
                i++;
            }
            cur += to_string(count) + res[i];
        }
        res = cur;
    }
    return res;
    }
};
