Output Status:

Runtime: 11 ms, faster than 11.63% of C++ online submissions for Binary Tree Level Order Traversal.
Memory Usage: 12.6 MB, less than 32.61% of C++ online submissions for Binary Tree Level Order Traversal.


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
   vector<vector<int>> levelOrder(TreeNode* root) {
        
       if(root == NULL){
           return{};
       }
       
        vector<vector<int>> res;
        
        queue<TreeNode *> q;
        
        q.push(root);
        
        while(q.size()){
            
            int n = q.size();
            vector<int> v;
            for(int i=0;i<n;i++){
                TreeNode *curr = q.front();
                q.pop();
                v.push_back(curr->val);
               
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                 if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
            res.push_back(v);
            
        }
        return res;
        
    }
};
