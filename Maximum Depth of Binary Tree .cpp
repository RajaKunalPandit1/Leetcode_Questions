Output Status:

Runtime: 12 ms, faster than 53.08% of C++ online submissions for Maximum Depth of Binary Tree.
Memory Usage: 18.9 MB, less than 15.07% of C++ online submissions for Maximum Depth of Binary Tree.


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
