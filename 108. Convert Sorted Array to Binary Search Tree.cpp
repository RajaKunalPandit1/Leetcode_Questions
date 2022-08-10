Output Status : 

Runtime: 115 ms, faster than 8.47% of C++ online submissions for Convert Sorted Array to Binary Search Tree.
Memory Usage: 342.5 MB, less than 9.25% of C++ online submissions for Convert Sorted Array to Binary Search Tree.


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
    TreeNode *bst(vector<int> nums, int low , int high){
        
        if(low > high) return NULL;
        
        int midpoint = (low + high) >> 1;
        
        TreeNode *node = new TreeNode(nums[midpoint]);
        node->left = bst(nums,low,midpoint-1);
        node->right = bst(nums,midpoint+1,high);
        return node;
        
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
     
        int n = nums.size();
        
        if(n == 0) return NULL;
        
        return bst(nums,0,n-1);
        
    }
};
