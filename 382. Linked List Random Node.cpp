Output Status : 

Runtime
21 ms
Beats
79.24%
Memory
16.7 MB
Beats
57.94%

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

    ListNode *head = NULL;

    Solution(ListNode* head) {
        this->head = head;    
    }
    
    int getRandom() {
        int res = 0, i =1;
        ListNode *p = this->head;
        while(p){

            if(rand() % i == 0){
                res = p->val;
            }
            i++;
            p = p->next;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
