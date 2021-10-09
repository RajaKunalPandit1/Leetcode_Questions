Output Status:

Runtime: 4 ms, faster than 95.85% of C++ online submissions for Reverse Linked List.
Memory Usage: 8.2 MB, less than 79.09% of C++ online submissions for Reverse Linked List.


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
    ListNode* reverseList(ListNode* head) {
     
          ListNode *pre = NULL, *cur = head, *nex;
        
        while(cur != NULL){
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        
        return pre;
        
    }
};
