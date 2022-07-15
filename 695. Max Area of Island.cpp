Output Status : 

Runtime: 36 ms, faster than 35.70% of C++ online submissions for Max Area of Island.
Memory Usage: 23 MB, less than 99.97% of C++ online submissions for Max Area of Island.

  // Time : O(N^3) :: Aux_Space : O(M*N)
  
class Solution {
public:
    
    
    int count_island(vector<vector<int>>& grid, int i, int j, int &count){
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] == 0){
            return 0;
        }
        
        grid[i][j] = 0;
        
        if(count_island(grid,i+1,j,count)) count++;
        if(count_island(grid,i-1,j,count)) count++;
        if(count_island(grid,i,j-1,count)) count++;
        if(count_island(grid,i,j+1,count)) count++;
        
        return 1;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        int res = 0;
        
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                
                int count = 1;
                
                if(grid[i][j]){
                    
                    count_island(grid,i,j,count);
                    res = max(res,count);
                    
                }
            }
        }
        return res;
    }
    
};
