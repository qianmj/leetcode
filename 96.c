/*Unique Binary Search Trees 
Leetcode #96
Given n, how many structurally unique BST's (binary search trees) that store values 1...n?*/


class Solution {
public:
    int numTrees(int n) {
        int result = 0;
        if (n == 1 || n == 0)
        {
        	return 1;
        }
        for (int i = 1; i <= n; ++i)
        {
        	result += numTrees(i-1) * numTrees(n-i);
        }
        return result;
    }
};