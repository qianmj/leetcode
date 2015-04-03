/*Leetcode #141

Linked List Cycle 

Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?*/

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
    bool hasCycle(ListNode *head) {
    	if (NULL == head || NULL == head->next)
    	{
    		return false;
    	}
    	ListNode *slow = head;
    	ListNode *fast = slow->next;
    	while(slow&&fast&&fast->next){
    		slow = slow->next;
    		fast = fast->next->next;
    		if (slow == fast)
    			return true;
    	}
    	return false;
        
    }
};