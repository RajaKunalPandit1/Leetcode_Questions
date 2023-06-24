Output Status : 

Runtime
53 ms
Beats
6.94%
Memory
57.8 MB
Beats
82.50%

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

    void func(TreeNode *root, TreeNode *&first, TreeNode *&second, TreeNode *&prev){
        
        if(root == NULL) return;

        func(root->left,first,second,prev);

        if(prev != NULL && root->val <= prev->val){

            if(first == NULL){
                first = prev;
            }
            second = root;
        }
        prev = root;
        func(root->right,first,second,prev);
    }

    void recoverTree(TreeNode* root) {
        
        TreeNode *first = NULL,*second = NULL,*prev = NULL;

        func(root,first,second,prev);
        swap(first->val,second->val);
        // return root;
    }
};
