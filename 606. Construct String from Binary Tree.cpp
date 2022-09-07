Output Status : 

Runtime: 53 ms, faster than 25.89% of C++ online submissions for Construct String from Binary Tree.
Memory Usage: 53.9 MB, less than 23.79% of C++ online submissions for Construct String from Binary Tree.

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
    string tree2str(TreeNode* root) {
        string res = "";
        
        if(root == NULL){
            return res;
        }
        
        res += to_string(root->val);
        
        if(root->left){
            res += '(' + tree2str(root->left) + ')';
        }else if(root->right){
            res += "()";
        }
        if(root->right){
            res += '(' + tree2str(root->right) + ')';
        }
        
        return res;
    }
};
