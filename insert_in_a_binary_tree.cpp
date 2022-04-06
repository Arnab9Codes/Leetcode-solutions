/*
https://leetcode.com/problems/insert-into-a-binary-search-tree/
*/

//assumptions were that the incoming value is not in the binary tree

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
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        TreeNode* t;
        TreeNode* p;
        TreeNode* pr;
        p=root;
        t=new TreeNode(val, NULL, NULL);
        if(root==NULL){

            root=t;
            return root;
        }
        while((p!=NULL)){
            
            if(val>p->val){
                pr=p;
                p=p->right;
            }
            else{
                pr=p;
                p=p->left;
            }
        }
        if(val>pr->val){
           // if(pr->left!=NULL){
             //   pr->left=NULL;
            //}
            pr->right=t;
        }
        else{
            //if(pr->right!=NULL){
              //  pr->right=NULL;
            //}
            pr->left=t;
        }
        return root;
        
    }
};
