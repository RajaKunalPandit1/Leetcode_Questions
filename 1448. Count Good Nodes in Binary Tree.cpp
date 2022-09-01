Output Status : 

Runtime: 292 ms, faster than 6.60% of C++ online submissions for Count Good Nodes in Binary Tree.
Memory Usage: 86.3 MB, less than 91.25% of C++ online submissions for Count Good Nodes in Binary Tree.


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
    
    int res = 0;
    
    void helper(TreeNode *root, int x){
        
        if(root == NULL){
            return;
        }
        
        if(root->val >= x){res++;}
        
        helper(root->left,max(x,root->val));
        helper(root->right,max(x,root->val));
    }
    
    
    int goodNodes(TreeNode* root) {

        helper(root,root->val);
        return res;
    }
};
