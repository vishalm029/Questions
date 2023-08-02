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
    int getlen(ListNode* head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int len=getlen(head);
        int ans=len/2;
        ListNode* temp=head;
        int ch=0;
        while(ch<ans){
            temp=temp->next;
            ch++;
        }
        return temp;
        
    }
};