Output Status:

Runtime: 161 ms, faster than 24.67% of C++ online submissions for Island Perimeter.
Memory Usage: 96.1 MB, less than 98.87% of C++ online submissions for Island Perimeter.


class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int ans=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j])
                {
                    ans+=4;
                    if(i>0 && grid[i-1][j]) 
                        ans-=2;
                    if(j>0 && grid[i][j-1]) 
                        ans-=2;
                }
            }
        }
        return ans;
        
    }
};

