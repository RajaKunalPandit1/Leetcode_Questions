Output Status : 

Submission Detail
70 / 70 test cases passed.
Status: Accepted
Runtime: 141 ms
Memory Usage: 32.6 MB
Submitted: 1 minute ago


class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        map<vector<int>,int> mp;
        int res = 0;
        
        for(int i=0;i<grid.size();i++){
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
