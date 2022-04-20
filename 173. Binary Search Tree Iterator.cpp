Output Status: 

Runtime: 24 ms, faster than 95.32% of C++ online submissions for Binary Search Tree Iterator.
Memory Usage: 24.2 MB, less than 56.50% of C++ online submissions for Binary Search Tree Iterator.

  stack<TreeNode*> s;
    BSTIterator(TreeNode* root) {
        partialInorder(root);
    }
    
    void partialInorder(TreeNode* root){
        while(root != NULL){
            s.push(root);
            root = root->left;
        }
    }
    
    int next() {
        TreeNode* top = s.top();
        s.pop();
        partialInorder(top->right);
        return top->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }
    
