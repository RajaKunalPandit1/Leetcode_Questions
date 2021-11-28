Output Status:

Runtime: 12 ms, faster than 83.33% of C++ online submissions for All Paths From Source to Target.
Memory Usage: 12 MB, less than 56.54% of C++ online submissions for All Paths From Source to Target.



class Solution {
public:
    
    int target;
    vector<vector<int>> res;
    vector<int> tmp;
    void dfs(vector<vector<int>>& graph, int currNode = 0) {
        tmp.push_back(currNode);
        if (currNode == target) res.push_back(tmp);
        else for (int node: graph[currNode]) {
            dfs(graph, node);
        }
		tmp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size() - 1;
        dfs(graph);
        return res;
    }
};
