Output Status : 

Runtime: 42 ms, faster than 63.50% of C++ online submissions for Valid Sudoku.
Memory Usage: 18.5 MB, less than 60.98% of C++ online submissions for Valid Sudoku.

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>row(9,0);
        vector<int>col(9,0);
        vector<vector<int>>grid(3,vector<int>(3,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                    int val=mat[i][j]=='.'?0:1<<(mat[i][j]-'0');
                    if(row[i]&val||col[j]&val||grid[i/3][j/3]&val)
                    {
                        return false;
                    }
                    row[i]|=val;
                    col[j]|=val;
                    grid[i/3][j/3]|=val;
            }
        }
        return true;
    }
};
