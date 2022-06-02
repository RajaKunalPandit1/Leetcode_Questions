Output Status : 

Runtime: 15 ms, faster than 65.95% of C++ online submissions for Transpose Matrix.
Memory Usage: 10.6 MB, less than 78.16% of C++ online submissions for Transpose Matrix.
  

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) { // Time: O(m*n) :: Aux_Space  : O(m*n) 
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>> res(m,vector<int>(n));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[j][i] = matrix[i][j];
            }
        }
        return res;
    }
};

