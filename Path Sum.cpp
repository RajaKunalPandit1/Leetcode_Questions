Output Status:

Runtime: 19 ms, faster than 17.61% of C++ online submissions for Path Sum.
Memory Usage: 21.3 MB, less than 34.29% of C++ online submissions for Path Sum.

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
    bool hasPathSum(TreeNode* root, int targetSum) {
         if(root == NULL) return false;
        targetSum -= root->val;
        
        if(root->left == NULL && root->right == NULL){
            return (targetSum == 0) ? true : false;
        }
        return (hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum));
    }
};
