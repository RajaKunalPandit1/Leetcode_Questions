Output Status : 

Runtime
87 ms
Beats
97.58%
Memory
32.7 MB
Beats
54.21%

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        int row = grid.size();
        int col = grid[0].size();

        int res = 0;

        map<vector<int>,int> mp; 

        for(int i=0;i<row;i++){
            mp[grid[i]]++;
        }

        for(int i=0;i<grid[0].size();i++){
            
            vector<int> v;
            
            for(int j=0;j<grid.size();j++){
                v.push_back(grid[j][i]);
            }
            res += mp[v];
        }
        return res;

    }
};
