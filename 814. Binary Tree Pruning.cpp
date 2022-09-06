Output Status : 

Runtime: 3 ms, faster than 71.58% of C++ online submissions for Binary Tree Pruning.
Memory Usage: 8.8 MB, less than 64.29% of C++ online submissions for Binary Tree Pruning.


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
    int helper(TreeNode *root){
        
        
        if(root == NULL){
            return 0;
        }
        
        if(root->left == NULL && root->right == NULL){
            if(root->val == NULL){
                return 0;
            }else{
                return 1;
            }
        }
        
        int leftSubtree = helper(root->left);
        int rightSubtree = helper(root->right);
        
        if(leftSubtree == 0){
            root->left = NULL;
        }
        
        if(rightSubtree == 0){
            root->right = NULL;
        }
        
        return leftSubtree + rightSubtree + (root->val == 1 ? 1 : 0);
        
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        
        if(helper(root) == 0){
            return NULL;
        }
        return root;
    }
};

// Another Solution :: 

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
    TreeNode* pruneTree(TreeNode* root) {
        
        if(!root){
            return NULL;
        }
        
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        
        if(root->val == 0 && !root->left && !root->right){
            return NULL;
        }
        return root;
    }
};
