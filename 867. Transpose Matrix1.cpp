Output Status : 

Runtime
12 ms
Beats
63.92%
Memory
10.5 MB
Beats
77.89%

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> res(col,vector<int>(row));

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res[j][i] = matrix[i][j];
            }
        }
        return res;
    }
};

