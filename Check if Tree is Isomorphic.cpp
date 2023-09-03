Output Status : 

Runtime
2 ms
Beats
44.36%
Memory
6 MB
Beats
88.67%

bool isIso(Node *root1,Node *root2)
    {
        if(root1 == NULL && root2 == NULL) return true;
        if(root1 == NULL || root2 == NULL) return false;
        
        if(root1->data != root2->data){
            return false;
        }
        
        return (isIso(root1->left,root2->left) && isIso(root1->right,root2->right) || (isIso(root1->left,root2->left) && isIso(root1->right,root2->left))); 
        
    }
