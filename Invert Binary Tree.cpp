Output Status:

Runtime: 3 ms, faster than 57.45% of C++ online submissions for Invert Binary Tree.
Memory Usage: 9.7 MB, less than 36.95% of C++ online submissions for Invert Binary Tree.

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
        
         if(!root)
            return root;
        
        swap(root -> left, root -> right);
        invertTree(root -> left);
        invertTree(root -> right);
        
        return root;
        
    }
};

