/*Leetcode # 137
Single Number II 
Given an array of integers, every element appears three times except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?*/

class Solution {
public:
    int singleNumber(int A[], int n) {
    	int b0 = 0, b1 = 0, reset = 0;
    	if (n > 0){
    		for (int i = 0; i < n; i++){
    			b1 |= b0 & A[i];
    			b0 ^= A[i];
    			reset = b0 & b1;
    			b0 ^= reset;
    			b1 ^= reset;
    		}
    	}
    	return b0;
        
    }
};