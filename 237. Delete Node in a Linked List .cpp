Output Status : 

Runtime: 10 ms, faster than 97.65% of C++ online submissions for Delete Node in a Linked List.
Memory Usage: 7.7 MB, less than 37.95% of C++ online submissions for Delete Node in a Linked List.

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
    void deleteNode(ListNode* node) {
        
        
        node->val = node->next->val;
        node->next = node->next->next;
        
        
    }
};
