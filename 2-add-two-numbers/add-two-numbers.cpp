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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;

        while (l1 || l2) {
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;

            int total = x + y + carry;
            carry = total / 10;
            current->next = new ListNode(total % 10);

            current = current->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        if (carry) {
            current->next = new ListNode(carry);
        }

        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};
