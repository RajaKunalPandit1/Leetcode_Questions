Output Status:

Runtime: 4 ms, faster than 43.49% of C++ online submissions for Binary Tree Inorder Traversal.
Memory Usage: 8.3 MB, less than 63.46% of C++ online submissions for Binary Tree Inorder Traversal.

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
    
    void Inorder(TreeNode *root,vector<int> &res){
        if(root){
            Inorder(root->left,res);
            res.push_back(root->val);
            Inorder(root->right,res);
        }
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        Inorder(root,res);
        return res;
    }
};
