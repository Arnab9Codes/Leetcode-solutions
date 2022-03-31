/*
https://leetcode.com/problems/remove-duplicates-from-sorted-list/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int, int>map;
        
        struct ListNode* t=NULL;
        struct ListNode* prev=NULL;
        t=head; prev=head;
        
        
        if(not head)
            return nullptr;
        
        while(t!=NULL){
            map[t->val]++;
            if(map[t->val]>1){
                prev->next=t->next;
                t=t->next;
            }
            else{
                prev=t;
                t=t->next;
            }
                
        }
        return head;
    }
};
