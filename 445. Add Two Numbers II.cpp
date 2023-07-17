Output Status : 

Runtime
49 ms
Beats
22.46%
Memory
71.3 MB
Beats
47.34%

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

    ListNode *reverseLL(ListNode *node){

        ListNode *prev = NULL;

        while(node != NULL){

            ListNode *next = node->next;
            node->next = prev;
            prev = node;
            node = next;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1 = reverseLL(l1);
        l2 = reverseLL(l2);

        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;

        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry != 0){

            int sum = 0;

            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;
            carry = sum/10;

            ListNode *newnode = new ListNode(sum%10);
            temp->next = newnode;
            temp = temp->next;
        }
        
        dummy = reverseLL(dummy->next);
        return dummy;
    }
};
