Output Status : 

Runtime
12 ms
Beats
43.98%
Memory
7.6 MB
Beats
84.91%

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL){
            return NULL;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *dummy = head;

        bool flag  = false;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(fast == slow){
                while(slow != dummy){
                    slow = slow->next;
                    dummy = dummy->next;
                }
                return dummy;
            }
        }
        return NULL;
    }
};
