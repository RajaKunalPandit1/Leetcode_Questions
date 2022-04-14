Output Status: 

Runtime: 49 ms, faster than 66.82% of C++ online submissions for Search in a Binary Search Tree.
Memory Usage: 34.8 MB, less than 66.88% of C++ online submissions for Search in a Binary Search Tree.


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
    TreeNode* searchBST(TreeNode* root, int val) {
     
        while (root  && root->val != val) {
      if(root->val > val) root= root->left;
	  else root = root->right;
    }
    return root;
        
    }
};
