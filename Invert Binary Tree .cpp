Output Status:

Runtime: 4 ms, faster than 49.64% of C++ online submissions for Invert Binary Tree.
Memory Usage: 9.8 MB, less than 37.46% of C++ online submissions for Invert Binary Tree.


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
    TreeNode* invertTree(TreeNode* root) {
        
        if(root == NULL){
            return NULL;
        }
        
        
        invertTree(root->left);
        invertTree(root->right);
        swap(root->right,root->left);
        
        return root;
        
        
    }
};

// Iterative


  if (!root) return root;
        stack<TreeNode*> s;
        s.push(root);
        while (!s.empty()) {
            TreeNode* node = s.top();
            s.pop();
            if (node) {
                s.push(node->left);
                s.push(node->right);
                swap(node->left, node->right);
            }
        }
        return root;
    }
