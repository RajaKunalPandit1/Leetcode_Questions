Output Status:

Runtime: 8 ms, faster than 88.86% of C++ online submissions for Remove Duplicates from Sorted List.
Memory Usage: 11.6 MB, less than 77.29% of C++ online submissions for Remove Duplicates from Sorted List.

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
     
        if(!head) return head;
	ListNode* tmp = head;

	while(tmp && tmp -> next)
	{
		if(tmp -> val == tmp -> next -> val)
			tmp -> next = tmp -> next -> next;
		else
			tmp = tmp -> next; 
	}

	return head;
        
    }
};
