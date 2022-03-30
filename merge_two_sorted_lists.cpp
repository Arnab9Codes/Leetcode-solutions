/*
https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    struct ListNode* temp=new ListNode(-1);
    struct ListNode* m=NULL;
        
    //applying the merge algorithm
        
    while((list1!=NULL)&&(list2!=NULL)){
        struct ListNode* temp=new ListNode(-1);
        if((list1)->val<(list2)->val){
            temp->val=(list1)->val;
            temp->next=m;
            m=temp;
            (list1)=(list1)->next;
        }
        else{
            temp->val=(list2)->val;
            temp->next=m;
            m=temp;
            list2=(list2)->next;
        }
    }
    if((list1)!=NULL){
        while((list1)!=NULL){
            struct ListNode* temp=new ListNode(-1);
            temp->val=(list1)->val;
            temp->next=m;
            m=temp;
            (list1)=(list1)->next;
        }
    }
    else{
        while((list2)!=NULL){
            struct ListNode* temp=new ListNode(-1);
            temp->val=(list2)->val;
            temp->next=m;
            m=temp;
            list2=(list2)->next;
        }
    }
    //reverse it
    struct ListNode* list=NULL;
    
    while(m!=NULL){
        struct ListNode* t=new ListNode(-1);
        
        t->val=m->val;
        t->next=list;
        list=t;
        m=m->next;
    }
    return list;
    }
};

