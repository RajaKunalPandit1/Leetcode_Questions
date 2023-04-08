Output Status : 

Runtime
7 ms
Beats
61.34%
Memory
9.2 MB
Beats
12.87%

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
    void dfs(Node *curr,Node *node,vector<Node *> &visited){
        
        visited[node->val] = node;
        
        for(auto ele: curr->neighbors){
            
            if(visited[ele->val] == NULL){
                
                Node *newnode = new Node(ele->val); 
                (node->neighbors).push_back(newnode);
                dfs(ele,newnode,visited);
            }else{
                (node->neighbors).push_back(visited[ele->val]);
            }
        }
    }
public:
    Node* cloneGraph(Node* node) {
        
        // if the node is NULL,return NULL;
        
        if(node == NULL){
            return NULL;
        }
        
        // creating a visited vector, keeps the track of visited nodes
        vector<Node *> visited(1000,NULL);
        
        // creating the copy node of the first node;
        
        Node *copy = new Node(node->val);
        
        // updating the visited vector by the copied node
        visited[node->val] = copy;
        
        // Iterating for the Neighbours
        
        for(auto curr: node->neighbors){
            // if the neighbor node is not visited
            if(visited[curr->val] == NULL){
                // creating a deep of non-visted neighbor node;
                Node *newnode = new Node(curr->val);
                (copy->neighbors).push_back(newnode);
                // traversing the adjacent nodes;   
                dfs(curr,newnode,visited);
            }else{
                (copy->neighbors).push_back(visited[curr->val]);
            }   
        }
        return copy;
    }
};
