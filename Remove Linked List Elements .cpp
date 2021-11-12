Output Status:

Runtime: 12 ms, faster than 99.81% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 15.1 MB, less than 43.33% of C++ online submissions for Remove Linked List Elements.


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
    ListNode* removeElements(ListNode* head, int val) {
     
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            if(head->val == val){
                return NULL;
            }
            return head;
        }
        
        ListNode *curr = head;
        ListNode *nex;
        
        while(curr->next!= NULL){
            nex = curr->next;
            
            if(nex->val == val){
                curr->next = nex->next;
                
            }else{
                curr = curr->next;
            }  
        }
        
        if(head->val == val){
            return head->next;
        }
        
        return head; 
    }
};
