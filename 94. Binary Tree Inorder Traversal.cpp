Output Status :

Runtime: 8 ms, faster than 9.35% of C++ online submissions for Binary Tree Inorder Traversal.
Memory Usage: 9.6 MB, less than 11.02% of C++ online submissions for Binary Tree Inorder Traversal.


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
    vector<int> res;
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == NULL){
            return {};
        }else{
            inorderTraversal(root->left);
            res.push_back(root->val);
            inorderTraversal(root->right);
        }
        
        return res;
    }
};
