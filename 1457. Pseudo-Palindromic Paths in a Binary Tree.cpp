Output Status : 

Runtime: 680 ms, faster than 37.76% of C++ online submissions for Pseudo-Palindromic Paths in a Binary Tree.
Memory Usage: 180.1 MB, less than 74.93% of C++ online submissions for Pseudo-Palindromic Paths in a Binary Tree.


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
    int pseudoPalindromicPaths (TreeNode* root,int count=0) {
           if (!root) return 0;
        count ^= 1 << (root->val - 1);
        int res = pseudoPalindromicPaths(root->left, count) + pseudoPalindromicPaths(root->right, count);
        if (root->left == root->right && (count & (count - 1)) == 0) res++;
        return res;
        
    }
};
