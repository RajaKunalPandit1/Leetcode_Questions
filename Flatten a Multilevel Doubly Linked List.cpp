Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Flatten a Multilevel Doubly Linked List.
Memory Usage: 7.5 MB, less than 20.82% of C++ online submissions for Flatten a Multilevel Doubly Linked List.

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head, Node *rest = nullptr) {
        if (!head) return rest;
    head->next = flatten(head->child, flatten(head->next, rest));
    if (head->next) head->next->prev = head;
     head->child = nullptr;
     return head;
    }
};
