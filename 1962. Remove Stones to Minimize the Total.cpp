Output Status : 

Runtime
520 ms
Beats
95.86%
Memory
98.9 MB
Beats
70.86%

class Solution {
public:
    int minStoneSum(vector<int>& A, int k) {
        priority_queue<int> pq(A.begin(), A.end());
        int res = accumulate(A.begin(), A.end(), 0);
        while (k--) {
            int a = pq.top();
            pq.pop();
            pq.push(a - a / 2);
            res -= a / 2;
        }
        return res;
    }
};
