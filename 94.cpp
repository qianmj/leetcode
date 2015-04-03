/*Leetcode #94
Binary Tree Inorder Traversal 
Given a binary tree, return the inorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
   1
    \
     2
    /
   3
return [1,3,2].

Note: Recursive solution is trivial, could you do it iteratively?

confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.


OJ's Binary Tree Serialization:
The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.

Here's an example:
   1
  / \
 2   3
    /
   4
    \
     5
The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}".*/


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
    vector<int> inorderTraversal(TreeNode *root) {
        if (NULL == root){
            return vector<int>();     
        }
        vector<int> result;
        vector<int> res_left;
        vector<int> res_right;
        res_left = inorderTraversal(root->left);
        res_right = inorderTraversal(root->right);
        result.insert(result.end(),res_left.begin(),res_left.end());
        result.push_back(root->val);
        result.insert(result.end(),res_right.begin(),res_right.end());
        return result;
    }
};
  
//then do it iteratively, this solution will modify the original BST

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        if (NULL == root){
            return vector<int>();
        }          
        vector<int> result;
        stack<TreeNode *> treeStack;
        treeStack.push(root);
        TreeNode *temp;
        do{
            temp = treeStack.top();
            treeStack.pop();
            if (NULL != temp->right){
                treeStack.push(temp->right);
                temp->right = NULL;
            }
            
            if (NULL != temp->left){
                treeStack.push(temp);
                treeStack.push(temp->left);
                temp->left = NULL;
            }
            else{
                result.push_back(temp->val);
            }
        }while(!treeStack.empty());
        return result;
    }
};

//Do it iteratively, not modify the original BST

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {        
        vector<int> result;
        stack<TreeNode *> treeStack;
        TreeNode *temp = root;
        while(!treeStack.empty() || temp){
            if (NULL != temp){
                treeStack.push(temp);
                temp = temp->left;
            }
            else{
                TreeNode *node;
                node = treeStack.top();
                treeStack.pop();
                result.push_back(node->val);
                temp = node->right;
            }
        }
        return result;
    }
};

//Moris traversal, no stack, no recursion
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) { 
        if (NULL == root){
            return vector<int>();
        }        
        vector<int> result;
        TreeNode *temp = root;
        TreeNode *pre;
        while(NULL != temp){
            if (NULL == temp->left){
                result.push_back(temp->val);
                temp = temp->right;
            }
            else{
                pre = temp->left;
                while(NULL != pre->right && pre->right != temp){
                    pre = pre->right;
                }
                if (NULL == pre->right){
                    pre->right = temp;
                    temp = temp->left;
                }
                else{
                    pre->right = NULL;
                    result.push_back(temp->val);
                    temp = temp->right;
                }
            }
        }
        return result;
    }
};

