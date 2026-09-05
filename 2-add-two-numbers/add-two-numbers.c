/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head = l3;

    int carry = 0;

    while(l1 != NULL && l2 != NULL) {

        int sum = l1->val + l2->val + carry;

        if(sum < 10) {
            l3->val = sum;
            carry = 0;
        }
        else {
            l3->val = sum % 10;
            carry = 1;
        }

        l1 = l1->next;
        l2 = l2->next;

        // Create next node if ANY list still has nodes
        if(l1 != NULL || l2 != NULL) {
            l3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            l3 = l3->next;
        }
    }

    // l1 is remaining
    while(l1 != NULL) {

        int sum = l1->val + carry;

        if(sum < 10) {
            l3->val = sum;
            carry = 0;
        }
        else {
            l3->val = sum % 10;
            carry = 1;
        }

        l1 = l1->next;

        if(l1 != NULL) {
            l3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            l3 = l3->next;
        }
    }

    // l2 is remaining
    while(l2 != NULL) {

        int sum = l2->val + carry;

        if(sum < 10) {
            l3->val = sum;
            carry = 0;
        }
        else {
            l3->val = sum % 10;
            carry = 1;
        }

        l2 = l2->next;

        if(l2 != NULL) {
            l3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            l3 = l3->next;
        }
    }

    // Final carry
    if(carry == 1) {
        l3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        l3 = l3->next;
        l3->val = 1;
    }

    l3->next = NULL;

    return head;
}