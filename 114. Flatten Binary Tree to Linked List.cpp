Output Status : 

Runtime: 3 ms, faster than 97.25% of C++ online submissions for Flatten Binary Tree to Linked List.
Memory Usage: 12.5 MB, less than 96.54% of C++ online submissions for Flatten Binary Tree to Linked List.


// Recursive Sol : Time : O(N) :: Aux_Space : O(N)

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
    TreeNode *prev = NULL;
    
    void flatten(TreeNode* root) {
        
        if(root == NULL) return;
        
        flatten(root->right);
        flatten(root->left);
        
        root->right = prev;
        root->left = NULL;
        prev = root;
        
    }
};

// Iterative Solution :: Time : O(N) :: Aux_Space : O(N)

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
    void flatten(TreeNode* root) {
       
        if(root == NULL) return;
        
        stack<TreeNode *> st;
        
        st.push(root);
        
        while(!st.empty()){
            
            TreeNode *curr = st.top();
            st.pop();
            
            if(curr->right != NULL)
                st.push(curr->right);
            if(curr->left != NULL)
                st.push(curr->left);
            
            if(!st.empty()){
                curr->right = st.top();
            }
            curr->left = NULL;
        }
        
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(1)

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
    void flatten(TreeNode* root) {
        
        TreeNode *curr = root;
        TreeNode *prev;
        
        while(curr!= NULL){
            
            if(curr->left != NULL){
                
                prev = curr->left;
                
                while(prev->right != NULL)
                    prev = prev->right;
                
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};
