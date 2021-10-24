Output Status:

Runtime: 28 ms, faster than 85.75% of C++ online submissions for Count Complete Tree Nodes.
Memory Usage: 30.8 MB, less than 64.22% of C++ online submissions for Count Complete Tree Nodes.

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
    int countNodes(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }
        return countNodes(root->right) + countNodes(root->left)+1;
    }
};

// Another Solution

class Solution {
public:
    
    /*
    We need to design an algo which runs in less than O(n) time complexity. So, one 
    way is to just travel the edges as this is a complete binary tree (except last level) 
    so we know the number of nodes at any level. So, we must travel on edges only as we can find nodes       between the edges at any level as 2^level. 
    */ 
	
    int countNodes(TreeNode* root) 
    {
        if(root == NULL) return 0;
        
        TreeNode* l = root; 
        TreeNode* r = root;
        
        int leftH = 0, rightH = 0;  //To compare heights
        
        while(l)                    //Traverse left edge till left node exists and count the left height
        {
            l = l->left;
            leftH++;
        }
        
        while(r)                    //Tranverse right edge till right node exists and count the right height
        {
            r = r->right;
            rightH++;
        }
        
        if(leftH == rightH)     //If left and Right height are equal then return the height in O(n)
        {
            return (1 << leftH) - 1;
        }
        
        return 1 + countNodes(root->left) + countNodes(root->right); //If height and right heights are not equal then go in recursion and look for that subtree which is complete.
    }
};
