Output Status: 

Runtime: 4 ms, faster than 99.55% of C++ online submissions for Linked List Cycle.
Memory Usage: 7.9 MB, less than 81.34% of C++ online submissions for Linked List Cycle.


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
    bool hasCycle(ListNode *head) {
        
        if(!head){
            return false;
        }
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return true;
            }
        }
        
        return false;
        
    }
};

