/*
https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    vector<int>postorder;
    
    void postOrder(TreeNode* root){
        
        if(root==NULL){
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        
        postorder.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(root==NULL){
            return postorder;
        }
        else{
            postOrder(root);
        }
        
        return postorder;
    }
};

