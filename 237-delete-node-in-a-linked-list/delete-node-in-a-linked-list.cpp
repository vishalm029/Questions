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
    void deleteNode(ListNode* node) {
        // ListNode* curr=node;
        // ListNode* prev=NULL;
        // int ch=1;
        // while(ch<=node->val){
        //     prev=curr;
        //     curr=curr->next;
        //     ch++;
        // }
        // prev->next=curr->next;
 
        node->val = node->next->val; 
        //copying the next node value
        node->next = node->next->next; 
        // deleting the next node
        
    }
};