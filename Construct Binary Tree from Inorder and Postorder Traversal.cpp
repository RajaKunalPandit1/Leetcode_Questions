Output Status:

Runtime: 29 ms, faster than 34.48% of C++ online submissions for Construct Binary Tree from Inorder and Postorder Traversal.
Memory Usage: 26.4 MB, less than 38.15% of C++ online submissions for Construct Binary Tree from Inorder and Postorder Traversal.


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
    unordered_map<int,int>m;
    TreeNode* solve(vector<int>& inorder,vector<int>& postorder,int start,int end,int &postIndex){
        if(start>end) return NULL;
         int inorderIndex = m[postorder[postIndex]];

        TreeNode* root = new TreeNode(inorder[inorderIndex]);    
        
        (postIndex)--;
      root->right=solve(inorder,postorder,inorderIndex+1,end,postIndex);
        root->left=solve(inorder,postorder,start,inorderIndex-1,postIndex);
        
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        for(int i=0;i<inorder.size();i++){
           m[inorder[i]] = i;
            
        }
        int postIndex=postorder.size()-1;
        return solve(inorder,postorder,0,postorder.size()-1,postIndex);
    }
};
