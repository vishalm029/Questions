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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* nxt = head;
        ListNode* temp;

    while(nxt !=  NULL){
         temp = nxt->next;
         nxt->next = prev;
         prev = nxt;
         nxt = temp;
    }
    return prev;
}

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        int carry = 0;
        ListNode* ans = new ListNode(NULL);
        ListNode* head = ans;
        while(l1 != NULL && l2 != NULL){
            int s = l1->val + l2->val + carry;
            carry = s/10;
            s = s%10;
            ListNode* temp =  new ListNode(s);
            ans->next = temp;
            ans = ans->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1 != NULL){
            int s = l1->val + carry;
            carry = s/10;
            s = s%10;
            ListNode* temp =  new ListNode(s);
            ans->next = temp;
            ans = ans->next;
            l1 = l1->next;
        }

        while(l2 != NULL){
            int s = l2->val + carry;
            carry = s/10;
            s = s%10;
            ListNode* temp =  new ListNode(s);
            ans->next = temp;
            ans = ans->next;
            l2 = l2->next;
        }

        if( carry > 0){
            ListNode* temp =  new ListNode(carry);
            ans->next = temp;
        }
        
        return reverse(head->next);
    }
};