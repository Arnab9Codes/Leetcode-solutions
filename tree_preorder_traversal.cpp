/*
https://leetcode.com/problems/binary-tree-preorder-traversal/
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<int>preorder;
        
    void preOrder(TreeNode* root){
            
        if(root==NULL){
                return;
        }
        preorder.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
        
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(root==NULL){
            return preorder;
        }
        preOrder(root);

     return preorder;
    }

};

