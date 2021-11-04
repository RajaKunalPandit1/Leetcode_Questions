Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum of Left Leaves.
Memory Usage: 13.4 MB, less than 44.54% of C++ online submissions for Sum of Left Leaves

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
    int sumOfLeftLeaves(TreeNode* root,bool left = false) {
        
        if(root == NULL){
            return 0;
        }
        
        if(root->left == NULL && root->right == NULL){
            if(left){
                return root->val;                
            }
        }
        
            return sumOfLeftLeaves(root->left,true) + sumOfLeftLeaves(root->right,false);
    
        
    }
};

// Another Solution 


class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
       if (!root) return 0;
        if (root->left && !root->left->left && !root->left->right) return root->left->val + sumOfLeftLeaves(root->right);
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right); 
    }
};
