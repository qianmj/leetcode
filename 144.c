/*Leetcode #144
Binary Tree Preorder Traversal 
Given a binary tree, return the preorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
   1
    \
     2
    /
   3
return [1,2,3].

Note: Recursive solution is trivial, could you do it iteratively?*/


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 //First, do it recursively
class Solution {
public:
	vector <int> result;
    vector<int> preorderTraversal(TreeNode *root) {
    	if (NULL != root){

	    	result.push_back(root->val);
	    	preorderTraversal(root->left);
	    	preorderTraversal(root->right);
    	}
    	return result;

        
    }
};