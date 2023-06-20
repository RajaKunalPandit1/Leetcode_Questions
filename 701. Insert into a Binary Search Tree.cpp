Output Status : 

Runtime
118 ms
Beats
9.95%
Memory
56.8 MB
Beats
64.48%

// Recursive :: 

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root == NULL){
            return new TreeNode(val);
        }else if(root->val > val){
            root->left = insertIntoBST(root->left,val);
        }else{
            root->right = insertIntoBST(root->right,val);
        }

        return root;
    }
};

// Iterative 

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        TreeNode *temp = new TreeNode(val);
        TreeNode *curr = root;
        TreeNode *prev = NULL;

        while(curr){

            prev = curr;

            if(curr->val == val){
                return root;
            }else if(curr->val > val){
                curr = curr->left;
            }else{
                curr = curr->right;
            }
        }

        if(prev == NULL){
            return temp;
        }else if(prev->val > val){
            prev->left = temp;
        }else{
            prev->right = temp;
        }
        return root;
    }
};
