/*
https://leetcode.com/problems/binary-tree-level-order-traversal/
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>bfs;
        queue<TreeNode*>q;
        
        vector<int>level;
        int lvl_count=0;
        
        TreeNode* x=NULL;
        
        if(root==NULL){
            return bfs;
        }
        else{
            q.push(root);
                
            while(!q.empty()){
                lvl_count=q.size();
                
                while(lvl_count>0){
                    x=q.front();
                    level.push_back(x->val);
                
                    if(x->left!=NULL){
                        q.push(x->left);
                    }
                    if(x->right!=NULL){
                        q.push(x->right);
                    }
                    q.pop();
                    lvl_count--;                    
                
                }

                bfs.push_back(level);
                level.clear();
            }
        }
            
     return bfs;
        
    }
};
