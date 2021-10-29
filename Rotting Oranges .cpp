Output Status:

Runtime: 4 ms, faster than 92.11% of C++ online submissions for Rotting Oranges.
Memory Usage: 13.1 MB, less than 50.83% of C++ online submissions for Rotting Oranges.


class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), dir[5] = {-1, 0, 1, 0, -1}, fresh = 0, ans = 0; 
        
        queue<pair<int, int>> q; 
        for (int i = 0; i < m; ++i) 
            for (int j = 0; j < n; ++j) 
                if (grid[i][j] == 1) ++fresh; 
                else if (grid[i][j] == 2) q.emplace(i, j); 
        
        while (q.size() && fresh) {
            for (int sz = q.size(); sz; --sz) {
                auto [i, j] = q.front(); q.pop(); 
                for (int k = 0; k < 4; ++k) {
                    int ii = i + dir[k], jj = j + dir[k+1]; 
                    if (0 <= ii && ii < m && 0 <= jj && jj < n && grid[ii][jj] == 1) {
                        --fresh; 
                        grid[ii][jj] = 2; 
                        q.emplace(ii, jj); 
                    }
                }
            }
            ++ans; 
        }
        return fresh == 0 ? ans : -1; 
    }
};


