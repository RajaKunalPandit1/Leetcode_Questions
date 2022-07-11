Output Status : 

Runtime: 8 ms, faster than 31.50% of C++ online submissions for Binary Tree Right Side View.
Memory Usage: 11.9 MB, less than 66.66% of C++ online submissions for Binary Tree Right Side View.


// Iterative Sol :: Time : O(N) :: Aux_Space : O(N)
  
 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
        if(!root)
            return {};
        
        vector<int> res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int n = q.size();
            
            for(int i=0;i<n;i++){
                
                TreeNode*curr = q.front();
                q.pop();
                
                if(i == n-1)
                    res.push_back(curr->val);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            
            }
        }
        return res;
    }
};
  
  
// Recursive Sol :: Time : O(N) :: Aux_Space : O(H) [H is the Height of the Tree]
  
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void reversePreorder(TreeNode* root, int level , vector<int> &res){
        
        if(root == NULL)
            return;
        
        if(res.size() == level){
            res.push_back(root->val);
        }
        
        reversePreorder(root->right,level+1,res);
        reversePreorder(root->left,level+1,res);
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
       
        vector<int> res;
        
        reversePreorder(root,0,res);
        return res;
    }
};
