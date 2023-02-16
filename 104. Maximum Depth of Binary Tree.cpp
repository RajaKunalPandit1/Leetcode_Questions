Output Status : 

Runtime
10 ms
Beats
59.12%
Memory
19 MB
Beats
19.79%

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
    int maxDepth(TreeNode* root) {
      if (root==NULL) return 0; 
		  return max(maxDepth(root->left)+1, maxDepth(root->right)+1);
    }
};
