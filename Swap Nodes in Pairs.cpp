Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Swap Nodes in Pairs.
Memory Usage: 7.6 MB, less than 7.38% of C++ online submissions for Swap Nodes in Pairs.


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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode *curr = head;
        
        while(curr!= NULL && curr->next != NULL){
            
            swap(curr->next->val,curr->val);
            curr = curr->next->next;

        }
        return head;        
    }
};


// Another Solution 


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* temp;
        temp = head->next;
        head->next = swapPairs(head->next->next);
        temp->next = head;
        
        return temp;
    }
};
