Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Excel Sheet Column Number.
Memory Usage: 5.7 MB, less than 99.36% of C++ online submissions for Excel Sheet Column Number.


class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int res = 0;
        
        for(auto x: columnTitle){
            int d = x - 'A' + 1;
            res = res*26 + d;
        }
        return res;
    }
};
