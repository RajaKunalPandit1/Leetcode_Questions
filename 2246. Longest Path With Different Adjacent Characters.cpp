Output Status : 

Runtime
421 ms
Beats
85.82%
Memory
181.3 MB
Beats
59.17%

class Solution {
public:
    
    int dfs(vector<vector<int>> &child,string &s,int &res,int i){
      int big1 = 0,big2 = 0;

      for(int &j : child[i]){
        int cur = dfs(child,s,res,j);
        if(s[i] == s[j]) continue;
        if(cur > big2){
          big2 = cur;
        }
        if(big2 > big1){
          swap(big1,big2);
        }
      }
      res = max(res,big1+big2+1);
      return big1 + 1;
    }

    int longestPath(vector<int>& parent, string s) {
        int n = s.size();
        int res = 0;

        vector<vector<int>> child(n,vector<int>());

        for(int i=1;i<n;i++){
          child[parent[i]].push_back(i);
        }
        dfs(child,s,res,0);

        return res;
    }
};

