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
    bool hasCycle(ListNode *head) {
        // if(head==NULL){
        //     return false;
        // }

        // ListNode* slow =head;
        // ListNode* fast=head;
        // while(slow!=NULL && fast!=NULL){
        //     fast=fast->next;
        //     if(fast!=NULL){
        //         fast=fast->next;
        //     }
        //     slow=slow->next;
        //     if(slow==fast){
        //         return 1;
        //     }
        // }
        // return false;
        ListNode*slow=head;
       ListNode*fast=head;
       ListNode*enter=head; 
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(enter!=slow)
                {
                    enter=enter->next;
                    slow=slow->next;
                }
                return slow;
            }

        }
        return NULL;
    }
};