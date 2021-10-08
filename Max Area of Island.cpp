Output Status:

Runtime: 28 ms, faster than 33.36% of C++ online submissions for Max Area of Island.
Memory Usage: 23.7 MB, less than 43.94% of C++ online submissions for Max Area of Island.


class Solution {
public:
     void area(vector<vector<int>>&grid, vector<vector<bool>> &chk, int i, int j, int &n,int &m, int & ans, int row[], int col[])
    {
        ans++;
        chk[i][j]=true;
        for(int k=0;k<4;k++)
        {
            if(i+row[k]<n && i+row[k]>=0 && j+col[k]<m && j+col[k]>=0 && grid[i+row[k]][j+col[k]] &&chk[i+row[k]][j+col[k]]==false)
            {
                area(grid, chk, i+row[k],j+col[k], n,m,ans,row,col);
            }
        }
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row[]={-1,0,0,1};
        int col[]={0,-1,1,0};
        int n=grid.size();
        int m = grid[0].size();
        vector<vector<bool>> chk(n,vector<bool>(m,false));
        int ans=0;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!chk[i][j] && grid[i][j])
                {
                    temp =0;
                    area(grid,chk,i,j,n,m,temp,row,col);
                    ans = max(temp,ans);
                    
                }
            }
        }
        return ans;
        
    }
};
