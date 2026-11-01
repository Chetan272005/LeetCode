
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode* curr = head;

    while (curr != NULL && curr->next != NULL) {
        int value = gcd(curr->val, curr->next->val);

        struct ListNode* node =
            (struct ListNode*)malloc(sizeof(struct ListNode));

        node->val = value;
        node->next = curr->next;
        curr->next = node;

        curr = node->next;
    }

    return head;
}