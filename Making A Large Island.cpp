Output Status:
Runtime: 508 ms, faster than 72.71% of C++ online submissions for Making A Large Island.
Memory Usage: 186 MB, less than 43.10% of C++ online submissions for Making A Large Islan


class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        
         int ans = 0, n = grid.size(), v = 2; 
        unordered_map<int, int> freq; 
        int d[5] = {1, 0, -1, 0, 1}; 
        
        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < n; ++j) 
                if (grid[i][j] == 1) {
                    stack<pair<int, int>> stk; 
                    stk.emplace(i, j); 
                    grid[i][j] = v; 
                    while (stk.size()) {
                        auto [i, j] = stk.top(); stk.pop(); 
                        ++freq[v]; 
                        for (int k = 0; k < 4; ++k) {
                            int ii = i + d[k], jj = j + d[k+1]; 
                            if (0 <= ii && ii < n && 0 <= jj && jj < n && grid[ii][jj] == 1) {
                                stk.push({ii, jj}); 
                                grid[ii][jj] = v; 
                            }
                        }
                    }
                    ++v; 
                }
        
        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < n; ++j) 
                if (grid[i][j] == 0) {
                    int cand = 1; 
                    unordered_set<int> seen; 
                    for (int k = 0; k < 4; ++k) {
                        int ii = i + d[k], jj = j + d[k+1]; 
                        if (0 <= ii && ii < n && 0 <= jj && jj < n && grid[ii][jj] && !seen.count(grid[ii][jj])) {
                            seen.insert(grid[ii][jj]); 
                            cand += freq[grid[ii][jj]]; 
                        }
                    }
                    ans = max(ans, cand); 
                } else 
                    ans = max(ans, freq[grid[i][j]]); 
        return ans; 
        
        
    }
};

// Another Solution 

class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j, int index) {
        int n=grid.size();
        if(i<0 || i>=n || j<0 || j>=n || grid[i][j]!=1) return 0;
        grid[i][j]=index;
        int count = dfs(grid, i+1, j, index) + 
                    dfs(grid, i-1, j, index) + 
                    dfs(grid, i, j+1, index) + 
                    dfs(grid, i, j-1, index);
        return count+1;
    }
    
    void findNeighbours(vector<vector<int>>& grid, int i, int j, set<int>& s) {
		//finding adjacent island groups
        int n=grid.size();
        if(i>0) s.insert(grid[i-1][j]);
        if(j>0) s.insert(grid[i][j-1]);
        if(i<n-1) s.insert(grid[i+1][j]);
        if(j<n-1) s.insert(grid[i][j+1]);
    }
    
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size(), res=0, index=2, count;
        map<int, int> area;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j]==1) {
                    area[index]=dfs(grid, i, j, index);
                    res=max(res, area[index++]);
					//if the grid is one large island, we would find the maximum size island here
                }
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j]==0) {
                    set<int> s;
                    findNeighbours(grid, i, j, s);
                    count=1;    //to account for the converted island
                    for(int i:s)
                        count+=area[i];       // count the number of islands in the adjacent groups
                    res=max(res, count);
                }
            }
        }
        
        return res;
    }
};
