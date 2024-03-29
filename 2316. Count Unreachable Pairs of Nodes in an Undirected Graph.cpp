Output Status : 

Runtime
503 ms
Beats
95.28%
Memory
181.5 MB
Beats
65.86%


class Solution {
public:
    long countPairs(int n, vector<vector<int>>& edges) {
        createGraph(n, edges);
        vector<bool> visited(n, false);
        int numberOfVisitedNodes = 0;
        long numberOfUnreachablePairsOfNodes = 0;

        for (int node = 0; node < n; ++node) {
            if (!visited[node]) {
                int numberOfNodesInCurrentGroup = depthFirstSearch_countConnectedNodesInCurrentGroup(node, visited);
                numberOfUnreachablePairsOfNodes += (long) numberOfNodesInCurrentGroup * numberOfVisitedNodes;
                numberOfVisitedNodes += numberOfNodesInCurrentGroup;
            }
        }
        return numberOfUnreachablePairsOfNodes;
    }

private:
    vector<int>* graph;

    int depthFirstSearch_countConnectedNodesInCurrentGroup(int node, vector<bool>& visited) {
        visited[node] = true;
        int countConnectedNodes = 1;

        for (int neighbour : graph[node]) {
            if (!visited[neighbour]) {
                countConnectedNodes += depthFirstSearch_countConnectedNodesInCurrentGroup(neighbour, visited);
            }
        }
        return countConnectedNodes;
    }

    void createGraph(int numberOfNodes, vector<vector<int>>& edges) {
        graph = new vector<int>[numberOfNodes];
        for (int i = 0; i < edges.size(); ++i) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
    }
};
