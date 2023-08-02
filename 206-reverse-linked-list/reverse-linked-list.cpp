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
    void Reverse(ListNode* &head,ListNode* &curr,ListNode* &prev){
        //base case
        if(curr==NULL){
            head=prev;
            return;
        }
        ListNode* forward=curr->next;
        Reverse(head,forward,curr);
        curr->next=prev;

    }
    ListNode* reverseList(ListNode* head) {

/////////////////ITERATIVE SOLUTION/////////////////
        // //case for null and 1 node list
        // if(head==NULL||head->next==NULL){
        //     return head;
        // }
        // ListNode* prev=NULL;
        // ListNode* curr=head;
        // ListNode* forward=NULL;
        // while(curr!=NULL){
        //     forward=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=forward;
        // }
        // return prev;


////////////RECURSIVE SOLUTION////////
    ListNode* curr=head;
    ListNode* prev=NULL;
    Reverse(head,curr,prev);
    return head;

    }
};