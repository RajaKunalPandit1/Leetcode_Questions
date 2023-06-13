Output Status : 

Runtime
54 ms
Beats
48.5%
Memory
17.1 MB
Beats
16.64%

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_set<ListNode *> st;
        ListNode *curr = headA;

        while(curr != NULL){
            st.insert(curr);
            curr = curr->next;
        }

        curr = headB;

        while(curr != NULL){

            if(st.find(curr) != st.end()){
                return curr;
            }
            curr = curr->next;
        }

        return NULL;
    }
};

// Another Sol : 

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int lenA = 0,lenB = 0;

        ListNode *curr = headA;

        while(curr != NULL){
            lenA++;
            curr = curr->next;
        }

        curr = headB;

        while(curr != NULL){
            lenB++;
            curr = curr->next;
        }

        int diff = abs(lenA-lenB);

        ListNode *temp = NULL;
        if(lenA > lenB){
            curr = headA;
            temp = headB;
        }else{
            curr = headB;
            temp = headA;
        }

        for(int i=0;i<diff;i++){
            curr = curr->next;
        }

        while(curr != NULL && temp != NULL){
            
            if(curr == temp){
                return curr;
            }
            curr = curr->next;
            temp = temp->next;
        }
        return NULL;
    }
};
