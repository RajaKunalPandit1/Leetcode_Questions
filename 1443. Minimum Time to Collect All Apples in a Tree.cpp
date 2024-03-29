Output Status : 

Runtime
325 ms
Beats
52.35%
Memory
81.2 MB
Beats
12.8%

class Solution {
public:

    unordered_map<int,vector<int>> g;
    unordered_map<int,bool> visited;

    void createGraph(vector<vector<int>> &edges){
      for(auto e: edges){
        g[e[0]].push_back(e[1]);
        g[e[1]].push_back(e[0]);
      }
    }

    int dfs(int node, int myCost,vector<bool> &hasApple){
      if(visited[node]){
        return 0;
      }

      visited[node] = true;

      int childCost = 0;

      for(auto x: g[node]){
        childCost += dfs(x,2,hasApple);
      }

      if(childCost == 0 && hasApple[node] == false){
        return 0;
      }
      return (childCost + myCost);
    }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        createGraph(edges);
        return dfs(0,0,hasApple);
    }
};
