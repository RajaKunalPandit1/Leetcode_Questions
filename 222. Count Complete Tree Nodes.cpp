Output Status : 

Runtime: 43 ms, faster than 82.20% of C++ online submissions for Count Complete Tree Nodes.
Memory Usage: 30.9 MB, less than 63.27% of C++ online submissions for Count Complete Tree Nodes.

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
    int countNodes(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }
        
        return (1+countNodes(root->right) + countNodes(root->left));
    }
};
