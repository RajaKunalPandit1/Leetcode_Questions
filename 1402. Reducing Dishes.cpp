Output Status  : 

Runtime
3 ms
Beats
94.52%
Memory
8.1 MB
Beats
89.59%

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        int n = satisfaction.size();
        int presum = 0, res = 0;
        for (int i = 0; i < n; i++) {
            presum += satisfaction[i];
            if (presum < 0) {
                break;
            }
            res += presum;
        }
        return res;
    }
};
