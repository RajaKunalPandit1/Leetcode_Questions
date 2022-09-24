Output Status : 

Runtime: 8 ms, faster than 92.19% of C++ online submissions for Path Sum II.
Memory Usage: 20 MB, less than 60.91% of C++ online submissions for Path Sum II.

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
    vector<vector<int>> res;
    
    void generate(TreeNode *root, int &targetSum, vector<int> &path, int &sum){
        
        
        if(root == NULL){return;}
        
        sum += root->val;
        
        path.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL){
            
            if(sum == targetSum){
                res.push_back(path);
            }
        }
        
        generate(root->left,targetSum,path,sum);
        generate(root->right,targetSum,path,sum);
        
        path.pop_back();
        sum -= root->val;
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> path;
        int sum = 0;
        generate(root,targetSum,path,sum);
        return res;
    }
};
