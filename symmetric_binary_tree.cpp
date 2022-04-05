/*
https://leetcode.com/problems/symmetric-tree/submissions/
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
    
    bool subtreeSymmetric(TreeNode* left, TreeNode* right){
        
        if((left==NULL) &&(right==NULL)){
            return true;
        }
    
        if( ((left!=NULL) &&(right!=NULL)) && (left->val==right->val) && (subtreeSymmetric(left->left, right->right)
                                ) &&(subtreeSymmetric(left->right, right->left))){
            return true;
        }
        else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        else{
            return subtreeSymmetric(root->left, root->right);
        }
        return true;
    }
};
