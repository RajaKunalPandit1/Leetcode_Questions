Output Status : 

Runtime
13 ms
Beats
71.49%
Memory
9.5 MB
Beats
77.35%


class Solution {
public:

    void dfs(int i, int j, vector<vector<int>> &grid){

        int m = grid.size(), n = grid[0].size();

        if(i < 0 || i>=m || j<0 || j >= n || grid[i][j] != 0){
            return;
        }

        grid[i][j] = 1;

        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);

    }

    int closedIsland(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();

        for(int i=0;i<row;i++){
            dfs(i,0,grid);
            dfs(i,col-1,grid);
        }

        for(int j=0;j<col;j++){
            dfs(0,j,grid);
            dfs(row-1,j,grid);
        }

        int count = 0;

        for(int i=1;i<row-1;i++){
            for(int j=1;j<col-1;j++){
                if(grid[i][j] == 0){
                    dfs(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
};
