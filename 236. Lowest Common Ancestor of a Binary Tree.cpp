Output Status : 

Runtime: 13 ms, faster than 96.34% of C++ online submissions for Lowest Common Ancestor of a Binary Tree.
Memory Usage: 14.2 MB, less than 57.81% of C++ online submissions for Lowest Common Ancestor of a Binary Tree.

// Naive Solution :: Time : O(N) :: Aux_Space : O(N)
  
  
  /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool getPath(TreeNode *root,vector<TreeNode *> &res, int x){
        
        if(root == NULL){
            return false;
        }
        
        res.push_back(root);
        
        if(root->val == x) return true;
        
        if(getPath(root->left,res,x) || getPath(root->right,res,x)) return true;
        
        res.pop_back();
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        TreeNode *res;
        
        if(!root){
            return {};
        }
        
        vector<TreeNode *> v1;
        vector<TreeNode *> v2;
        
        getPath(root,v1,p->val);
        getPath(root,v2,q->val);
        
        int n = min(v1.size(),v2.size());
        
        for(int i=0;i<n;i++){
            if(v1[i] == v2[i]){
                res = v1[i];
            }else{
                break;
            }
        }
        return res;
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(N) [N cuz of Skew Trees]

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     
        if(root == NULL || root == q || root == p) return root;
        
        TreeNode *left = lowestCommonAncestor(root->left,p,q);
        TreeNode *right = lowestCommonAncestor(root->right,p,q);
        
        if(left == NULL){
            return right;
        }else if(right == NULL){
            return left;
        }else{
            return root;
        }
    }
};
