Output Status:

Runtime: 8 ms, faster than 14.31% of C++ online submissions for Cousins in Binary Tree.
Memory Usage: 11.1 MB, less than 24.00% of C++ online submissions for Cousins in Binary Tree.

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
     void rec(TreeNode* root, int x, int y, int d, int parent) {
        if (!root) return;
        
        if (root->val == x) dx = d, x_par = parent;
        if (root->val == y) dy = d, y_par = parent;
        
        if (dx != -1 && dy != -1) return;
        
        rec(root->left, x, y, d+1, root->val);
        rec(root->right, x, y, d+1, root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        rec(root, x, y, 0, -1);
        return dx == dy && x_par != y_par;
    }
    
private:
    int dx = -1, dy = -1, x_par = -1, y_par = -1;
};
