Output Status : 

Runtime: 12 ms, faster than 87.21% of C++ online submissions for Validate Binary Search Tree.
Memory Usage: 21.5 MB, less than 98.63% of C++ online submissions for Validate Binary Search Tree.

// Time : O(N) :: Aux_Space : O(1) [Excluding the Stack Space]
  
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
    bool isValidBST(TreeNode *root, long min_value, long max_value){
        
        if(root == NULL) return true;
        
        if(root->val >= max_value || root->val <= min_value) return false;
        return isValidBST(root->left,min_value,root->val) && isValidBST(root->right,root->val,max_value);
        
    }
    
    bool isValidBST(TreeNode* root) {
        return isValidBST(root,LONG_MIN,LONG_MAX);
    }
};
