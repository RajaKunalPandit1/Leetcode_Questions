Output Status : 

Runtime: 270 ms, faster than 85.01% of C++ online submissions for Palindrome Linked List.
Memory Usage: 128.3 MB, less than 8.05% of C++ online submissions for Palindrome Linked List.
  
// Naive Solution :: Time : O(N) + O(N) :: Aux_Space : O(N)
  
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
        
        vector<int> v;
        
        while(head != NULL){
            
            v.push_back(head->val);
            head = head->next;
        }
        
        int low = 0,high = v.size()-1;
        
        while(low <= high){
            
            if(v[low] != v[high]){
                return false;
            }else{
                low++;
                high--;
            }
        }
        return true;
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(1)

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
    
    ListNode *reverseLL(ListNode *head){
        
        ListNode *prev = NULL;
        ListNode *next = NULL;
        
        while(head != NULL){
            
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head->next == NULL){
            return true;
        }
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast->next!=NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverseLL(slow->next);
        slow = slow->next;
        
        while(slow != NULL){
            
            if(slow->val != head->val){
                return false;
            }
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};
