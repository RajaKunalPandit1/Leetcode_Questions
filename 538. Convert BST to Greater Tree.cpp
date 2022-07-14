Output Status : 

Runtime: 72 ms, faster than 26.10% of C++ online submissions for Convert BST to Greater Tree.
Memory Usage: 33.4 MB, less than 92.45% of C++ online submissions for Convert BST to Greater Tree.


//Sol 1 : 

class Solution {
public:
    
    TreeNode *convertBST(TreeNode *root, int &sum){
        
        if(root == NULL) return NULL;
        
        convertBST(root->right,sum);
        sum += root->val;
        root->val = sum;
        convertBST(root->left,sum);
        
        return root;
    }
    
    TreeNode* convertBST(TreeNode* root) {
        
        int sum = 0;
        
        return convertBST(root,sum);
    }
};

// Sol 2 : 

class Solution {
    int sum = 0;
public:
    TreeNode* convertBST(TreeNode* root) {
        
        if(root!=NULL){
            
            convertBST(root->right);
            sum += root->val;
            root->val = sum;
            convertBST(root->left);
            
        }
        
        return root;
    }
};

// Another Solution :: 

 int pre = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if (root->right) bstToGst(root->right);
        pre = root->val = pre + root->val;
        if (root->left) bstToGst(root->left);
        return root;
    }
