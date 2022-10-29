Output Status : 

Runtime: 668 ms, faster than 49.20% of C++ online submissions for Earliest Possible Day of Full Bloom.
Memory Usage: 168.6 MB, less than 57.23% of C++ online submissions for Earliest Possible Day of Full Bloom.

class Solution {
public:
    int earliestFullBloom(vector<int>& plant, vector<int>& grow) {
        
        vector<pair<int, int>> v;
    for (auto i = 0; i < plant.size(); ++i)
        v.push_back({grow[i], plant[i]});
    sort(begin(v), end(v));
    int res = 0;
    for (auto [g, p] : v)
        res = max(res, g) + p;
    return res;
    }
};
