Output Status :

Runtime
8 ms
Beats
10.63%
Memory
10.1 MB
Beats
48.63%

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p == NULL && q == NULL){
            return true;
        }else if(p == NULL || q == NULL){
            return false;
        }else if(p->val != q->val){
            return false;
        }else{
            return (isSameTree(p->right,q->right) && isSameTree(p->left,q->left));
        }
    }
};
