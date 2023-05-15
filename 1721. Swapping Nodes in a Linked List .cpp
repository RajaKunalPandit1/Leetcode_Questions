Output Status : 

Runtime
744 ms
Beats
7.22%
Memory
190.1 MB
Beats
11.3%

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
