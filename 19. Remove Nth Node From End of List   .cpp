Output Status : 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Nth Node From End of List.
Memory Usage: 10.6 MB, less than 75.00% of C++ online submissions for Remove Nth Node From End of List.


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *curr = new ListNode();
        curr->next = head;
        
        ListNode *fast = curr;
        ListNode *slow = curr;
        
        int k = n;
        
        while(k--){
            fast = fast->next;
        }
        
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        
        return curr->next;
        
    }
};
