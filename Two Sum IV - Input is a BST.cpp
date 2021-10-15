Output Status:

Runtime: 62 ms, faster than 12.39% of C++ online submissions for Two Sum IV - Input is a BST.
Memory Usage: 38.9 MB, less than 31.59% of C++ online submissions for Two Sum IV - Input is a BST.

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
        unordered_set<int> s;
    bool findTarget(TreeNode* root, int k) {
        if(!root)
        return false;
        if(s.count(k-root->val)) 
        return true;
        s.insert(root->val);
        return findTarget(root->left,k)||findTarget(root->right,k);
        
    }
};
