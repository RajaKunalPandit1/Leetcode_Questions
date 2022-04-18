Output Status: 

Runtime: 23 ms, faster than 59.43% of C++ online submissions for Kth Smallest Element in a BST.
Memory Usage: 24.2 MB, less than 60.91% of C++ online submissions for Kth Smallest Element in a BST.


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
    int kthSmallest(TreeNode* root, int k) {
           stack<TreeNode*> s;
        while (root || !s.empty()) {
            while (root) {
                s.push(root);
                root = root->left;
            }
            
            root = s.top();
            s.pop();
            
            if (--k == 0) return root->val;
            root = root->right;
        }
        return -1;
    }
};
