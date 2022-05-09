Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Combinations of a Phone Number.
Memory Usage: 6.3 MB, less than 95.51% of C++ online submissions for Letter Combinations of a Phone Number.

class Solution {
public:
     const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
		vector<string> result;
        result.push_back("");
        
        for(auto digit: digits) {
            vector<string> tmp;
            for(auto candidate: pad[digit - '0']) {
                for(auto s: result) {
                    tmp.push_back(s + candidate);
                }
            }
            result.swap(tmp);
        }
        return result;
        
    }
};
