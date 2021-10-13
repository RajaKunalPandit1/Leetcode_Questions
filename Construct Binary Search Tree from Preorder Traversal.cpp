Output Status:

Runtime: 3 ms, faster than 84.90% of C++ online submissions for Construct Binary Search Tree from Preorder Traversal.
Memory Usage: 13.7 MB, less than 67.49% of C++ online submissions for Construct Binary Search Tree from Preorder Traversal.


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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        TreeNode * root = helper(preorder, i,INT_MAX);
        return root;
    }
    TreeNode* helper(vector<int>& a, int& i, int bound){
        if(i==a.size() || a[i]>bound) return NULL;
        TreeNode* root = new TreeNode(a[i]);
        i++;
        root->left = helper(a, i, root->val);
        root->right = helper(a, i, bound);
        return root;
    }
};
