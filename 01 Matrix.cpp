Output Status:

Runtime: 1212 ms, faster than 5.02% of C++ online submissions for 01 Matrix.
Memory Usage: 33.8 MB, less than 17.87% of C++ online submissions for 01 Matrix.


class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
     
          vector<pair<int,int>> ones;
        vector<pair<int,int>> zeroes;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0) zeroes.push_back({i,j});
                else ones.push_back({i,j});
            }
        }
        for(auto one : ones){
            int tmpans=INT_MAX; 
            for(auto zero : zeroes){
                tmpans = min(tmpans,abs(one.first-zero.first) + abs(one.second-zero.second));
            }
            mat[one.first][one.second]=tmpans;
        }
        return mat;
        
    }
};
