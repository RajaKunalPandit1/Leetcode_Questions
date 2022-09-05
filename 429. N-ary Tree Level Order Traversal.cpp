Output Status :

Runtime: 60 ms, faster than 5.44% of C++ online submissions for N-ary Tree Level Order Traversal.
Memory Usage: 11.9 MB, less than 34.37% of C++ online submissions for N-ary Tree Level Order Traversal.

  // Time : O(N) :: Aux_Space : O(N)
  
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> res;
        
        if(root == NULL) return res;
        
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty()){
            
            int s = q.size();
            vector<int> v;
            
            for(int i=0;i<s;i++){
                Node *curr = q.front();
                q.pop();
                
                v.push_back(curr->val);
                
                for(Node *child : curr->children){
                    q.push(child);
                }
            }
            res.push_back(v);
        }
        return res;
    }
};

// Another Solution Using DFS :: Time : O(N) :: Aux_Space : O(H)


/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> res;
    void dfs(Node *root, int level){
        
        if(root == NULL) return;
        
        if(level == res.size()) res.emplace_back();
        
        res[level].push_back(root->val);
        
        for(Node *child : root->children){
            dfs(child,level+1);
        }
    }
    
    
    vector<vector<int>> levelOrder(Node* root) {
        
        dfs(root,0);
        return res;
    }
};
