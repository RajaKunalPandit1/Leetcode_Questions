Output Status : 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Level Order Traversal.
Memory Usage: 12.6 MB, less than 31.07% of C++ online submissions for Binary Tree Level Order Traversal.
  
  
// BFS Solution :: Time : O(N) :: Aux_Space : O(1)  

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
                
        if(root == NULL){
            return {};
        }
        
        vector<vector<int>> res;
        
        queue<TreeNode *> q;
        
        q.push(root);
        
        while(!q.empty()){
            
            int n = q.size();
            
            vector<int> v;
            
            for(int i=0;i<n;i++){
                

                TreeNode *temp = q.front();

                v.push_back(temp->val);
                q.pop();

                
                if(temp->left){
                    q.push(temp->left);
                }
                
                if(temp->right){
                    q.push(temp->right);
                }
                
            }
            
            res.push_back(v);
        }
        return res;
        
    }
};

// DFS Solution :: Time : O(N) :: Aux_Space : O(Height of Tree)

class Solution {
public:
    
    void dfs(TreeNode *root, vector<vector<int>> &res, int level){
        
        if(!root) return;
        
        if(res.size() == level) res.push_back({});
        
        res[level].push_back(root->val);
        dfs(root->left,res,level+1);
        dfs(root->right,res,level+1);
        
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        
        if(!root) return res;
        
        dfs(root,res,0);
        
        return res;
        
    }
};
