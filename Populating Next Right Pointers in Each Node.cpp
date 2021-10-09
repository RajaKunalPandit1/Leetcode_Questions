Output Status:

Runtime: 16 ms, faster than 90.62% of C++ online submissions for Populating Next Right Pointers in Each Node.
Memory Usage: 16.7 MB, less than 85.78% of C++ online submissions for Populating Next Right Pointers in Each Node.
  
  
    /*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
         if(root && root->left != NULL) {
            root->left->next = root->right;
            connect(root->left);
            if(root->next != NULL) root->right->next = root->next->left;
            connect(root->right);
        }
        
        return root;
        
    }
};

