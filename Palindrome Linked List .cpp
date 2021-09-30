Output Status:

Runtime: 224 ms, faster than 45.75% of C++ online submissions for Palindrome Linked List.
Memory Usage: 128.3 MB, less than 7.64% of C++ online submissions for Palindrome Linked List.


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
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL){
            return true;
        }
        
        stack<ListNode*> s;
        
        ListNode *curr = head;
        
        while(curr != NULL){
            s.push(curr);
            curr = curr->next;
        }

        bool flag = true;
        while(!s.empty() && head != NULL){
            
            if(s.top()->val != head->val){
                flag = false;
                break;
            }else{
                s.pop();
                head = head->next;
            }
        }
        return flag;        
    }
};

// Another Solution

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
    // time = o(n)                       space = o(1) 
    // concept is traverse the linked list......find middle of linked list.........reverse the 
	//post mid part of linked list............then check from the starting and post mid part of 
	//linked list for pallindrome
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        // after completion of while loop slow is at the middle of the linked list
        //common method to find the middle of linked list
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // method to reverse the linked list
        ListNode* prev = NULL;
        ListNode* curr = slow->next;
        ListNode* after;
        
        while(curr){
            after = curr->next;
            curr->next = prev;
            prev = curr;
            curr = after;
        }  
        slow->next = prev;
        
        ListNode* temp1 = head;
        ListNode* temp2 = slow->next;
        while(temp2){
            cout<<temp1->val<<" "<< temp2->val<<"\n";
            if(temp1->val!=temp2->val) return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return true;
    }
};
