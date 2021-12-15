Output Status: 

Runtime: 34 ms, faster than 69.03% of C++ online submissions for Insertion Sort List.
Memory Usage: 9.6 MB, less than 71.76% of C++ online submissions for Insertion Sort List.

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
     ListNode* insertionSortList(ListNode* head) {
        if (!head) return NULL;
        ListNode *tail = head, *curr, *iter;
        while (tail->next) {
            // checking if the next one is already the next bigger
            if (tail->val <= tail->next->val) {
                tail = tail->next;
                continue;
            }
            // taking a new node to parse, curr, out of the list
            curr = tail->next;
            tail->next = curr->next;
            // checking if curr will become the new head
            if (curr->val < head->val) {
                curr->next = head;
                head = curr;
                continue;
            }
            // all the other cases
            iter = head;
            while (iter != tail) {
                // checking when we can splice curr between iter and the following value
                if (curr->val < iter->next->val) {
                    curr->next = iter->next;
                    iter->next = curr;
                    break;
                }
                // moving to the next!
                iter = iter->next;
            }
        }
        return head;
    }
};
