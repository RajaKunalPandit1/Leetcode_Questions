Output Status : 

Runtime
644 ms
Beats
78.52%
Memory
205.7 MB
Beats
74.7%

class Solution {
public:
  vector<int> fun(vector<vector<int>> &adj,string &labels,int i, vector<int> &result){

     vector<int> ans(26, 0);
    result[i] = 1;
    ans[labels[i] - 'a'] = 1;
    
    for(int j = 0; j != adj[i].size(); j++)
      if(!result[adj[i][j]]){
        vector<int> tmp = fun(adj, labels,adj[i][j],result);
        for(int k = 0; k != 26; k++) ans[k] += tmp[k];
      }
    
    result[i] = ans[labels[i] - 'a'];
    
    return ans;
  }

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        
      vector<int> res(n,0);
      vector<vector<int>> adj(n);

      for(int i=0; i!= edges.size();i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
      }

      fun(adj,labels,0,res);
      return res;
    }
};
