Output Status : 

Runtime: 1411 ms, faster than 77.78% of C++ online submissions for Delete the Middle Node of a Linked List.
Memory Usage: 294.8 MB, less than 64.88% of C++ online submissions for Delete the Middle Node of a Linked List.


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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head == NULL){
            return NULL;
        }
        
        if(head->next == NULL){
            delete head;
            return NULL;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = head;
        
        while(fast != NULL && fast->next != NULL){
            
            
            if(slow != head) prev = prev->next;
            
            slow = slow->next;
            fast = fast->next->next; 
        }
        
        prev->next = slow->next;
        delete slow;
        return head;
        
    }
};
