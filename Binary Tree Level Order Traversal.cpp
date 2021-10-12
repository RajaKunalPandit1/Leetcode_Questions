Output Status:

Runtime: 4 ms, faster than 76.75% of C++ online submissions for Binary Tree Level Order Traversal.
Memory Usage: 12.5 MB, less than 84.78% of C++ online submissions for Binary Tree Level Order Traversal.


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
    vector<vector<int>> levelOrder(TreeNode* root) {

              vector<vector<int>> ans; //To store final ans
        if(!root) return ans; 
        queue<TreeNode*> q;
        q.push(root);
		//In each iteration of while loop,we print all the elements present in the queue as they will all be of the same level (Simultaneously we keep pushing their children into the queue if they exist)      
        while(q.size()){
		    int n=q.size();  
			vector<int> v; // To store data of nodes at each level           
            for(int i=0;i<n;i++){
                v.push_back(q.front()->val);
                TreeNode *temp=q.front(); 
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(v);
        }
    return ans;

    }
};
