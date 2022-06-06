Output Status: 

Runtime: 54 ms, faster than 69.58% of C++ online submissions for Intersection of Two Linked Lists.
Memory Usage: 17.3 MB, less than 11.81% of C++ online submissions for Intersection of Two Linked Lists.


// Naive Solution : Time : O(M*N) [M = Length of LL A, N = Length of LL B] :: Aux_Space : O(1)

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
        
        
        ListNode *curr2 = headB;
        
        while(curr2!=NULL){
            
            ListNode *curr1 = headA;
            // ListNode *temp = headB;
            
            while(curr1!= NULL){
                
                if(curr1 == curr2){
                    return curr2;
                }else{
                    curr1 = curr1->next;
                }
            }
            curr2 = curr2->next;
        }
        return NULL;
    }
};


// Better Solution Using Hashing : Time : O(M+N) :: Aux_Space : O(N)

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
        
        unordered_set<ListNode *> s;
        
        ListNode *curr1 = headA;
        ListNode *curr2 = headB;
        
        while(curr1 != NULL){
            s.insert(curr1);
            curr1 = curr1->next;
        }
        
        while(curr2 != NULL){
            
            if(s.find(curr2) != s.end()){
                return curr2;
            }else{
                curr2 = curr2->next;
            }
        }
        return NULL;
    }
};


// Efficient Solution :: Time : O(M) + O(M-N) + O(N) = O(2M) [M>N] :: Aux_Space : O(1)

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
        
        ListNode *dummy1 = headA;
        ListNode *dummy2 = headB;
        
        int lenA = 0,lenB = 0;
        
        while(dummy1 != NULL){
            lenA++;
            dummy1 = dummy1->next;
        }
        
        while(dummy2 != NULL){
            lenB++;
            dummy2 = dummy2->next;
        }
        
        int diff = 0;
        bool flagA = false;
        bool flagB = false;
        
        if(lenA > lenB){
            diff = lenA-lenB;
            flagA = true;
        }else{
            diff = lenB-lenA;
            flagB = true;
        }
        
        dummy1 = headA;
        dummy2 = headB;
        
        if(flagA){
            
            while(diff!=0){
                dummy1 = dummy1->next;
                diff--;
            }
        }else{
            while(diff!=0){
                dummy2 = dummy2->next;
                diff--;
            }
        }
        
        while(dummy1!=NULL && dummy2!=NULL){
            
            if(dummy1 == dummy2){
                return dummy1;
            }
            dummy1 = dummy1->next;
            dummy2 = dummy2->next;
            
        }
        return NULL;
    }
};

// Another Efficient Solution :: Time : O() :: Aux_Space : O(1)

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
        
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        
        ListNode *a = headA;
        ListNode *b = headB;
        
        while(a!=b){
            
            a = a==NULL?headB:a->next;
            b = b==NULL?headA:b->next;
            
        }
        return a;
    }
};
