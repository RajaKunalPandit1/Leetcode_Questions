Output Status: 

Runtime: 17 ms, faster than 17.32% of C++ online submissions for Linked List Cycle II.
Memory Usage: 9.6 MB, less than 12.13% of C++ online submissions for Linked List Cycle II.


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
         unordered_set<ListNode*> seen;
        while (head) {
            if (seen.find(head) != end(seen)) return head;
            seen.insert(head);
            head = head->next;
        }
        return NULL;
    }
};
