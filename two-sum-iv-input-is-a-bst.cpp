/*
https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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
        if (root==NULL){
            return ;
        }
        preorder.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        unordered_map<int,int>map;
        int reduction=0;
        
        if(root==NULL){
            return false;
        }
        
        preOrder(root);
        
        for(int i=0;i<preorder.size();i++){
            map[preorder[i]]++;
        }
        
        for(int i=0;i<preorder.size();i++){
            reduction=k-preorder[i];
            map[preorder[i]]--;
            if(map[reduction]>0){
                return true;
            }
        }
        return false;
    }
};
