Output Status : 

Runtime: 23 ms, faster than 62.00% of C++ online submissions for Average of Levels in Binary Tree.
Memory Usage: 22.5 MB, less than 72.83% of C++ online submissions for Average of Levels in Binary Tree.


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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> res;
        queue<TreeNode *> q;
        
        q.push(root);
        
        while(!q.empty()){
            
            long temp = 0;
            int s = q.size();
            
            for(int i=0;i<s;i++){
                
                TreeNode *curr = q.front();
                q.pop();
                
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                temp += curr->val;
            }
            res.push_back((double)temp/s);
        }
        return res;
    }
};

// DFS Solution :: 

 class Solution {
   public:
  vector<double> and;
  vector<int> lvlcount;
  void dfs(TreeNode* root, int lvl){
    if(root==NULL) return;
    if(ans.size()<lvl)
       { ans.push_back(root->val); lvlcount.push_back(1);}
    else
        {ans[lvl-1]+=root->val; lvlcount[lvl-1]++;}
    if(root->left!=NULL) dfs(root->left, lvl+1);
    if(root->right!=NULL) dfs(root->right, lvl+1);
    
}
vector<double> averageOfLevels(TreeNode* root) {
    dfs(root, 1);
    for(int i=0;i<ans.size();i++)
        ans[i]=ans[i]/lvlcount[i];
    return ans;
}
