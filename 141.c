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
    	ListNode *runner = head;
    	ListNode *temp = runner->next;
    	while(runner != NULL){
    		temp = runner->next;
    		while(temp != NULL){
    			if(temp == runner){
    				return true;
    			}
    			temp = temp->next;
    		}
    		runner = runner->next;
    	}
    	return false;
        
    }
};