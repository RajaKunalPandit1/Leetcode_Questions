Output Status : 

Runtime
40 ms
Beats
43.81%
Memory
31.6 MB
Beats
7.29%


// Iterative Sol :: 

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
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;

        queue<TreeNode *>  q;
        int res = 0;

        q.push(root);

        while(!q.empty()){

            int n = q.size();
            res += n;

            for(int i=0;i<n;i++){
                
                TreeNode *curr = q.front();
                q.pop();

                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
        }
        return res;
    }
};

// Recursive Sol :: 

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
    int countNodes(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }
        
        return (1+countNodes(root->right) + countNodes(root->left));
    }
};
