Output Status:

Runtime: 11 ms, faster than 8.66% of C++ online submissions for Remove Nth Node From End of List.
Memory Usage: 10.7 MB, less than 30.86% of C++ online submissions for Remove Nth Node From End of List.


Approach 1: Using 2-pointers
TC: O(n), SC: O(1)

class Solution {
public:
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p=head, *q=head;
        
        for(; n--; q = q->next);
        
        if(q == NULL){
            q = p->next;
            delete(p);
            return q;
        }
        
        for(; q->next != NULL; p = p->next, q = q->next);
        
        q = p->next;        
        p->next = q->next;
        delete(q);
        
        return head;
    }
};
Approach 2: Using Dumy Node
Significance of the dumy node (t) is that it always point to head of the Linked list.
Helps to avoid that if (q == NULL) check.
TC: O(n), SC: O(1)

class Solution {
public:
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *t = new ListNode(0,head), *p=t, *q=t;
        
        for(; n--; q = q->next);
        
        for(; q->next != NULL; p = p->next, q = q->next);
        
        q = p->next;
        p->next = q->next;
        delete(q);       
        
        return t->next;
    }
};
Approach 3: Recursive
TC: O(2n), SC: O(1) --- if function stack is avoided, otherwise O(n).

class Solution {
public:
    
    ListNode* removeNthFromEnd(ListNode* head, int &n) {
        if(head == NULL)
            return head;
        head->next = removeNthFromEnd(head->next, n);
        n--;
        if(n == 0)
            return head->next;
        return head;
    }
};
