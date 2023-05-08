Output Status : 

Runtime
13 ms
Beats
75.43%
Memory
11.2 MB
Beats
64.67%

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int result = 0;
        for (int i = 0; i < n; i++) {
            result += mat[i][i] + mat[i][n - i - 1];
        }
        if (n % 2 == 1) {
            result -= mat[n / 2][n / 2];
        }
        return result;
    }
};
