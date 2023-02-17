Output Status : 

Runtime
4 ms
Beats
56.1%
Memory
9.9 MB
Beats
30.6%

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
    void helper(TreeNode *root, int &minDiff, int &preVal){
      if(root == NULL){
        return;
      }
      helper(root->left,minDiff,preVal);
      if(preVal != -1){
        minDiff = min(minDiff,root->val-preVal);
      }
      preVal = root->val;
      helper(root->right,minDiff,preVal);
    }

    int minDiffInBST(TreeNode* root) {
      int minDiff = INT_MAX;
      int preVal = -1;
      helper(root,minDiff,preVal);
      return minDiff;
    }
};

