Output Status : 

Runtime
0 ms
Beats
100%
Memory
8.5 MB
Beats
44.83%

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root){
          return res;
        }

      stack<TreeNode *> st;
      st.push(root);
      
      auto node =  root;

      while(!st.empty()){
        
        node = st.top();
        st.pop();
        res.push_back(node->val);
        
        if(node->right){
          st.push(node->right);
        }

        if(node->left){
          st.push(node->left);
        }
        

      }
      return res;
    }
};
