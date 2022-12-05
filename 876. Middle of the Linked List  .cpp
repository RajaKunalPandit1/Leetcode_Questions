Output Status : 

Runtime: 9 ms, faster than 12.81% of C++ online submissions for Middle of the Linked List.
Memory Usage: 7.2 MB, less than 22.04% of C++ online submissions for Middle of the Linked List.


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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast != NULL && fast->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next; 
        }
        return slow;
    }
};

