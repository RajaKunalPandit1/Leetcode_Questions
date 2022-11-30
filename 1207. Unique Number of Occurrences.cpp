Output Status : 

Runtime: 8 ms, faster than 37.44% of C++ online submissions for Unique Number of Occurrences.
Memory Usage: 8.2 MB, less than 20.75% of C++ online submissions for Unique Number of Occurrences.

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        unordered_set<int> s;
        for (auto n : arr) ++m[n];
        for (auto& p : m) s.insert(p.second);
      return m.size() == s.size();
    }
};
