Output Status:

Runtime: 20 ms, faster than 85.13% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 15 MB, less than 79.04% of C++ online submissions for Remove Linked List Elements.

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
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            if(head->val==val){
                return NULL;
            }
            return head;
        }
        ListNode* curr=head;
        ListNode* temp;
        while(curr->next!=NULL){
            temp=curr->next;
            if(temp->val==val){
                curr->next=temp->next;
                
            }else{
                curr=curr->next;
            }
            
        }
        if(head->val==val){
            return head->next;
            }
        return head;
        
    }
};



