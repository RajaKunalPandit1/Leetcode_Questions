Output Status:

Runtime: 891 ms, faster than 49.40% of C++ online submissions for Swapping Nodes in a Linked List.
Memory Usage: 190.1 MB, less than 7.75% of C++ online submissions for Swapping Nodes in a Linked List.


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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* curr = head;
        ListNode* temp = head;
        
        vector<int> v;
        
        int cnt = 0;
        
        while(curr!=NULL){
            v.push_back(curr->val);
            curr = curr->next;
            cnt++;
        }
        
        swap(v[k-1],v[cnt-k]);
        
        int i=0;
        while(temp!=NULL){
            temp->val = v[i];
            i++;
            temp = temp->next;
        }
        return head;
        
    }
};

// Another Solution

ListNode* swapNodes(ListNode* head, int k) {
        ListNode *ptr1 = head, *ptr2 = head, *kth = NULL;
        while (--k)
            ptr1 = ptr1->next;
        
        kth = ptr1;
        ptr1 = ptr1->next;
        
        while (ptr1) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        swap(ptr2->val, kth->val);
        return head;
    }
