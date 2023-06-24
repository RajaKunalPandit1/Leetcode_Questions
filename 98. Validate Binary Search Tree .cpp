Output Status : 

Runtime
17 ms
Beats
39.36%
Memory
21.7 MB
Beats
64.16%

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

    bool func(TreeNode *root, long min_val, long max_val){

        if(root == NULL) return true;

        if(root->val <= min_val || root->val >= max_val) return false; 

        return (func(root->left,min_val,root->val) && func(root->right,root->val,max_val));

    }

    bool isValidBST(TreeNode* root) {

        return func(root,LONG_MIN,LONG_MAX);
    }
};

// Another Sol :: 

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
    long prev = LONG_MIN;

    bool isValidBST(TreeNode* root) {
        
        if(root == NULL) return true;

        if(isValidBST(root->left) == false) return false;

        if(root->val <= prev) return false;

        prev = root->val;

        return isValidBST(root->right);

    }
};
