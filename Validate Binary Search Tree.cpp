Output Status:

Runtime: 24 ms, faster than 12.26% of C++ online submissions for Validate Binary Search Tree.
Memory Usage: 21.7 MB, less than 30.84% of C++ online submissions for Validate Binary Search Tree.

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
    bool isValidBST(TreeNode* root) {
         stack<TreeNode*> s;
        TreeNode * node = root, *prev = NULL;
        while(node || !s.empty()){
            while(node){
                s.push(node);
                node = node -> left; 
            }
            node = s.top();
            s.pop();
			
			//This is the additional step.
            if(prev && node->val <= prev->val) return false;
            prev = node;
            node = node->right;
        }
        return true;
    }
};
