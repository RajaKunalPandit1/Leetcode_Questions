Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Preorder Traversal.
Memory Usage: 8.3 MB, less than 94.20% of C++ online submissions for Binary Tree Preorder Traversal.

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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> res;
	if(!root) return res;
	stack<TreeNode*> s;
	s.push(root);

	auto node = root;
	while(!s.empty()){
		node = s.top();
		s.pop();
		res.push_back(node->val);

		if(node -> right) s.push(node->right);
		if(node -> left) s.push(node->left);
	}
	return res;
        
    }
};
