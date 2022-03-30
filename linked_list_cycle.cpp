/*
https://leetcode.com/problems/linked-list-cycle/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        
        unordered_set<ListNode*>set;
        
        while(head!=NULL){
            if(set.find(head)==set.end()){
                set.insert(head);
                head=head->next;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
