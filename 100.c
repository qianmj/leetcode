/*Same Tree 
 * Leetcode #100
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool isSameTree(TreeNode *p, TreeNode *q) {
	if (NULL == p && NULL == q){
		return true;
	}
	if (p==NULL || q == NULL)
	{
		return false;
	}
	
	if (p->val != q->val)
	{
		return false;
	}
	
	
	if ( isSameTree(p->left,q->left) && isSameTree(p->right,q->right) ) 
	{
		return true;
	}
	
	return false;
	
	
	
}
