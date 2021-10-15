Output Status:

Runtime: 37 ms, faster than 31.75% of C++ online submissions for Lowest Common Ancestor of a Binary Search Tree.
Memory Usage: 23.4 MB, less than 11.44% of C++ online submissions for Lowest Common Ancestor of a Binary Search Tree.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if(root->val>max(p->val,q->val)) root=lowestCommonAncestor(root->left,p,q);
     else if(root->val<min(p->val,q->val)) root=lowestCommonAncestor(root->right,p,q);
     return root; 
        
    }
};
