Output Status : 

Runtime
43 ms
Beats
95.57%
Memory
30.2 MB
Beats
86.10%


class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
       vector<int> count(K);
        count[0] = 1;
        int prefix = 0, res = 0;
        for (int a : A) {
            prefix = (prefix + a % K + K) % K;
            res += count[prefix]++;
        }
        return res; 
    }
};
