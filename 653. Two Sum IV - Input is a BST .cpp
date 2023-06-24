Output Status : 

Runtime
40 ms
Beats
77.20%
Memory
39.3 MB
Beats
12.64%

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

    unordered_set<int> st;

    bool findTarget(TreeNode* root, int x) {
        
        if(root == NULL) return false;

        if(findTarget(root->left,x) == true) return true;

        if(st.find(x-root->val) != st.end()){
            return true;
        }else{
            st.insert(root->val);
        }
        return (findTarget(root->right,x));
    }
};
