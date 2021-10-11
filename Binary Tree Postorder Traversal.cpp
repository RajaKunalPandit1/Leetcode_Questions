Output Status:

Runtime: 4 ms, faster than 44.02% of C++ online submissions for Binary Tree Postorder Traversal.
Memory Usage: 8.5 MB, less than 36.07% of C++ online submissions for Binary Tree Postorder Traversal.


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
    void postOrder(vector<int> &p, TreeNode *root)
{
	if(!root)
		return;
	if(root->left)
		postOrder(p, root->left);
	if(root->right)
		postOrder(p, root->right);
	p.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root) {
	vector<int> p;
	postOrder(p, root);
	return p;
}
};
