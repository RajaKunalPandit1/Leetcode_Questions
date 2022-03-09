Output Status: 

Runtime: 13 ms, faster than 42.20% of C++ online submissions for Remove Duplicates from Sorted List II.
Memory Usage: 11.1 MB, less than 59.49% of C++ online submissions for Remove Duplicates from Sorted List II.


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
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode *dummy=new ListNode(0,head);
       ListNode *prev=dummy;
        
        while(head!=NULL){
       
        if(head->next!=NULL && head->val==head->next->val){
                
while(head->next!=NULL && head->val==head->next->val)head=head->next;
                     
                   
                        prev->next=head->next;
                }
                
                else prev=prev->next;
                       
               
                head=head->next;
        }
        
        return dummy->next;
    }
};
