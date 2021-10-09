Output Status:

Runtime: 44 ms, faster than 42.17% of C++ online submissions for Merge Two Binary Trees.
Memory Usage: 32.9 MB, less than 23.02% of C++ online submissions for Merge Two Binary Trees

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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
     
        if(!root1 && !root2) return NULL;
	if(!root1) return root2;
	if(!root2) return root1;

	TreeNode *root = new TreeNode(0);

//Hypothesis
	root->left = mergeTrees(root1->left, root2->left);
	root->right = mergeTrees(root1->right, root2->right);

//Induction
	root-> val = root1->val + root2->val;

	return root;
        
    }
};
