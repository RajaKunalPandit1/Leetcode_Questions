Output Status : 

Runtime
19 ms
Beats
59.72%
Memory
14.2 MB
Beats
83.40%

// Naive :: 

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

    bool func(TreeNode *root, vector<TreeNode *> &v, TreeNode *p){

        if(root == NULL) return false;
        v.push_back(root);

        if(root->val == p->val) return true;

        if(func(root->left,v,p) || func(root->right,v,p)){
            return true;
        }
        v.pop_back();
        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL )return NULL;

        vector<TreeNode *> v1,v2;

        func(root,v1,p);
        func(root,v2,q);

        int n = min(v1.size(),v2.size());

        root = NULL;

        for(int i=0;i<n;i++){
            if(v1[i]->val == v2[i]->val){
                root = v1[i];
            }else{
                return root;
            }
        }
        return root;
    }
};

// Efficient :: 

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
        
            if(root == NULL) return NULL;

            if(root->val == p->val || root->val == q->val){
                return root;
            }

            TreeNode *lca1 = lowestCommonAncestor(root->left,p,q);
            TreeNode *lca2 = lowestCommonAncestor(root->right,p,q);

            if(lca1 != NULL && lca2 != NULL){
                return root;
            }

            if(lca1!= NULL) return lca1;
            return lca2;
    }
};
