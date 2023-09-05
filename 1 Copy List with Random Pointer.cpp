Output Status : 

Runtime
5 ms
Beats
78.88%
Memory
11.1 MB
Beats
88.34%

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node *curr = head;

        while(curr != NULL){

            Node *temp = new Node(curr->val);
            temp->next = curr->next;
            curr->next = temp;
            
            curr = curr->next->next;
        }

        curr = head;

        while(curr != NULL){
            
            if(curr->random != NULL){
                curr->next->random = curr->random->next;
            }

            curr = curr->next->next;

        }

        Node *dummy = new Node(0);
        Node *temp = dummy;

        curr = head;
        Node *first;

        while(curr != NULL){

            first = curr->next->next;
            temp->next = curr->next;
            curr->next = first;

            curr = curr->next;
            temp = temp->next;

        }
        return dummy->next;
    }
};
