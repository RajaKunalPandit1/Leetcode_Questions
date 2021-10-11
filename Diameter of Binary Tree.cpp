Output Status:

Runtime: 19 ms, faster than 22.65% of C++ online submissions for Diameter of Binary Tree.
Memory Usage: 20.3 MB, less than 64.86% of C++ online submissions for Diameter of Binary Tree.

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
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int diameter = 0;
        helper(root, diameter);
        return diameter;
    }
    int helper(TreeNode* root, int& diameter)
    {   if(root == NULL){return 0;}
        int lh = helper(root->left, diameter) ;
        int rh = helper(root->right, diameter) ;
        diameter = max(diameter, lh+rh);
        
        return 1 + max(lh, rh) ;
    }
};

