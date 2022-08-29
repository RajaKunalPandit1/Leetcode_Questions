Output Status : 

Runtime: 58 ms, faster than 47.98% of C++ online submissions for Number of Islands.
Memory Usage: 12.3 MB, less than 83.10% of C++ online submissions for Number of Islands.


class Solution {
public:
    
    void numIslands(vector<vector<char>> &grid, int i, int j, int row,int col){
        
        if(i<0 || i>=row || j<0 || j>=col || grid[i][j] != '1') return;
        
        grid[i][j] = '2';
        
        numIslands(grid,i+1,j,row,col);
        numIslands(grid,i,j+1,row,col);
        numIslands(grid,i-1,j,row,col);
        numIslands(grid,i,j-1,row,col);
        
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int res = 0;
        int row = grid.size(),col = grid[0].size();
        
        if(row == 0){
            return res;
        }
        
        for(int i=0;i<row;i++){
            
            for(int j=0;j<col;j++){
                
                if(grid[i][j] == '1'){
                    numIslands(grid,i,j,row,col);
                    res++;
                }
            }
        }
        return res;
    }
};
