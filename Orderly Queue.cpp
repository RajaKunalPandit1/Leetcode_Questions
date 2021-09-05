Output Status:
Runtime: 4 ms, faster than 75.00% of C++ online submissions for Orderly Queue.
Memory Usage: 10.7 MB, less than 55.10% of C++ online submissions for Orderly Queue.


class Solution {
public:
    string orderlyQueue(string s, int k) {
        string ans = s; 
        if (k == 1) 
            for (int i = 1; i < s.size(); ++i) 
                ans = min(ans, s.substr(i) + s.substr(0, i)); 
        else 
            sort(ans.begin(), ans.end()); 
        return ans; 
    }
};
