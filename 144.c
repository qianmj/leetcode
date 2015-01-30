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

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
    	if (NULL == root){
    		return vector<int>();
    	}
    	vector<int> result;
    	result.push_back(root->val);
    	vector<int> res_left, res_right;
    	res_left = preorderTraversal(root->left);
    	res_right = preorderTraversal(root->right);
    	result.insert(result.end(),res_left.begin(),res_left.end());
    	result.insert(result.end(),res_right.begin(),res_right.end());
    	return result;
        
    }
};

//Do it iteratively, using stack
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
    	if (NULL == root){
    		return vector<int>();
    	}
    	vector <int> result;
    	//result.push_back(root->val);
    	stack<TreeNode *> treeStack;
    	TreeNode *temp;
    	treeStack.push(root);
    	while(!treeStack.empty()){
    		temp = treeStack.top();
    		result.push_back(temp->val);
    		treeStack.pop();
    		if (NULL != temp->right){
	    		treeStack.push(temp->right);
	    	}
	    	if (NULL != temp->left){
	    		treeStack.push(temp->left);
	    	}
    	}
    	return result;        
    }
};
