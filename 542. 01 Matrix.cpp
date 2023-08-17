Output Status : 

Runtime
1090 ms
Beats
5.1%
Memory
33.9 MB
Beats
58.86%

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
