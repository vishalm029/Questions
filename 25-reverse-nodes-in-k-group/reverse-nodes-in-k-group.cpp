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
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base case
        if(head==NULL){
            return NULL;
        }
        //Step1 : Reverse First K nodes
        ListNode* next=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        int ch=0;
        while(curr!=NULL && ch<k){
            curr=curr->next;
            ch++;
        }
        if(ch<k){
            return head;
        }
        curr=head;
        ch=0;
        while(curr!=NULL && ch<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            ch++;
        }
        //Step2 : Recursion will handle other cases
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        //Step3 : Return head of Reverse Linked List
        return prev;
        
    }
};