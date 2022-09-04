Output Status : 

Runtime: 10 ms, faster than 44.99% of C++ online submissions for Vertical Order Traversal of a Binary Tree.
Memory Usage: 13.5 MB, less than 59.23% of C++ online submissions for Vertical Order Traversal of a Binary Tree.

  
  // Time : O(N*logN) :: Aux_Space : O(N)
  
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int,map<int,multiset<int>>> mp;
        
        queue<pair<TreeNode *,pair<int,int>>> todo;
        todo.push({root,{0,0}});
        
        while(!todo.empty()){
            
            auto p = todo.front();
            todo.pop();
            TreeNode *node = p.first;
            
            int x = p.second.first,y = p.second.second;
            
            mp[x][y].insert(node->val);
            
            if(node->left){
                todo.push({node->left,{x-1,y+1}});
            }
            if(node->right){
                todo.push({node->right,{x+1,y+1}});
            }
        }
        
        vector<vector<int>> res;
        
        for(auto p : mp){
            
            vector<int> col;
            for(auto q: p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            res.push_back(col);
        }
        return res;
    }
};
