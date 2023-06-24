Output Status : 

Runtime
12 ms
Beats
95.2%
Memory
24 MB
Beats
72.57%

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

    void func(TreeNode *root,int &k, int &ans){

        if(root == NULL) return;

        func(root->left,k,ans);

        k--;

        if(k == 0){
            ans = root->val;
            return;
        }

        func(root->right,k,ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        
        int res = -1;
        func(root,k,res);
        return res;

    }
};
