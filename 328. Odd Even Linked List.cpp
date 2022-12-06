Output Status : 

C++
Runtime
15 ms
Beats
83.69%
Memory
10.6 MB
Beats
29.12%


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
  
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if (!head) return nullptr;
        ListNode *odd = head, *even = head->next, *evenHead = even;
        while (odd->next && even->next) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head; 
    }
};
