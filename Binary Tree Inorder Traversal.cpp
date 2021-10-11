Output Status:

Runtime: 3 ms, faster than 50.44% of C++ online submissions for Binary Tree Inorder Traversal.
Memory Usage: 8.3 MB, less than 86.06% of C++ online submissions for Binary Tree Inorder Traversal.

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
   void inorderTraversalHelper(TreeNode* root, vector<int> &res) {
	if(root)
	{
		if(root -> left)
			inorderTraversalHelper(root -> left, res);

		res.push_back(root -> val);

		if(root -> right)
			inorderTraversalHelper(root -> right, res);
	}

	return;
}


vector<int> inorderTraversal(TreeNode* root) 
{   
	vector<int> res;
	inorderTraversalHelper(root, res) ;
	return res;
}
};

