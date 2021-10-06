Output Status:
Runtime: 18 ms, faster than 17.87% of C++ online submissions for Reshape the Matrix.
Memory Usage: 10.7 MB, less than 82.09% of C++ online submissions for Reshape the Matrix.


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
         int m = mat.size();
    int n = mat[0].size();
    
    if(m*n != r*c)
        return mat;
    
    vector<vector<int>> ans(r,vector<int>(c,0));
    int row=0, col=0;
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
             ans[i][j] = mat[row][col];
             if(col == n-1)
             {
                 //reset values
                 col=0;
                 row++;
             }
            else 
                col++;
        }
        
    }
    
    return ans;
        
    }
};
