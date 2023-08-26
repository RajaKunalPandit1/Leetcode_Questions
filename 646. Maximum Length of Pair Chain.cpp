Output Status : 

Runtime
47 ms
Beats
96.39%
Memory
22.5 MB
Beats
86.44%

  class Solution {
public:
    int findLongestChain(std::vector<std::vector<int>>& pairs) {
        std::sort(pairs.begin(), pairs.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] < b[1];
        });
        
        int cur = INT_MIN, ans = 0;
        
        for (const auto& pair : pairs) {
            if (cur < pair[0]) {
                cur = pair[1];
                ans++;
            }
        }
        
        return ans;
    }
};
