Output Status: 

Runtime: 3 ms, faster than 97.31% of C++ online submissions for Clone Graph.
Memory Usage: 8.8 MB, less than 59.68% of C++ online submissions for Clone Graph.


/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    unordered_map<Node*,Node*> copiedNodes;
public:
   
    Node* cloneGraph(Node* node ) {
        
        // base cases
        if(node==nullptr)return node;
        
        
        // if not visited yet
        if(copiedNodes.find(node) == copiedNodes.end()){
            
            copiedNodes[node] = new Node(node->val, {});
            
             // explore neighbors nodes
            for(auto adj : node->neighbors){
               copiedNodes[node]->neighbors.push_back( cloneGraph(adj) ); 
            }
        }
     
        return copiedNodes[node];
        
    }
};
