/*
https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        struct ListNode * t=NULL;
        struct ListNode* prev=NULL;
        t=head;
        //prev=head;
        
    int c=0;

    if(t==NULL){

        return head;
    }
    while(t!=NULL){
      // this part ensures if first value matches then we push the head forward
      // c=0, to ensure we are at the beginning node of the linked list
      // that is why we update the c, whenever we enter the else condition
      // that means we are no longer removing the begining node and we can proceed to updating links using prev
        if((t->val==val)&&(c==0)){
            head=(head)->next;
            t=head;
            prev=head;
        }
        else{
          // we update the c, so that we do not enter the earlier if condition,
          // which solely is for removing nodes at the beginning by moving the head pointer to the next
            c++;
            if(t->val!= val){
                prev=t;
                t=t->next;
            }
            else{
            prev->next=t->next;t=t->next;
            }
        }

     }
        return head;
    }
};
