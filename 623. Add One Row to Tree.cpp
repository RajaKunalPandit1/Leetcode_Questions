Output Status : 

Runtime: 45 ms, faster than 16.32% of C++ online submissions for Add One Row to Tree.
Memory Usage: 24.8 MB, less than 86.98% of C++ online submissions for Add One Row to Tree.

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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth == 1){
            TreeNode *newNode = new TreeNode(val);
            newNode->left = root;
            return newNode;
        }else if(depth == 0){
            TreeNode *newNode = new TreeNode(val);
            newNode->right = root;
            return newNode;
        }
        if(!root){
            return nullptr;
        }
        
        else if(depth == 2){
            root->left = addOneRow(root->left,val,1);
            root->right = addOneRow(root->right,val,0);
            return root;
        }else if(depth > 2){
            root->left = addOneRow(root->left,val,depth-1);
            root->right = addOneRow(root->right,val,depth-1);
        }
        return root;
    }
};
