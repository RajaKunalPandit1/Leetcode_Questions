Output Status: 

Runtime: 207 ms, faster than 5.15% of C++ online submissions for Insert into a Binary Search Tree.
Memory Usage: 56.8 MB, less than 80.92% of C++ online submissions for Insert into a Binary Search Tree.


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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
         if(!root) return new TreeNode(val);
        if(val < root->val) root->left = insertIntoBST(root->left, val);
        if(val > root->val) root-> right = insertIntoBST(root->right, val);
        return root;
    }
};
