Output Status : 

Runtime: 26 ms, faster than 84.91% of C++ online submissions for Remove All Adjacent Duplicates In String.
Memory Usage: 10.9 MB, less than 66.38% of C++ online submissions for Remove All Adjacent Duplicates In String.

class Solution {
public:
    string removeDuplicates(string S) {
        string res = "";
        for (char& c : S)
            if (res.size() && c == res.back())
                res.pop_back();
            else
                res.push_back(c);
        return res;
    }
};
