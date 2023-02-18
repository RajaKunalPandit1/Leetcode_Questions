Output Status : 

Runtime
4 ms
Beats
33.95%
Memory
9.8 MB
Beats
46.85%


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
    TreeNode* invertTree(TreeNode* root) {
        
      if(root == NULL){
        return NULL;
      }

      invertTree(root->left);
      invertTree(root->right);
      swap(root->right,root->left);

      return root;
    }
};
