struct ListNode* mergeNodes(struct ListNode* head) {
    if (head == NULL) return NULL;

    struct ListNode *curr = head;
    int sum = 0;

    struct ListNode* temp = head->next;

    while (temp != NULL) {
        if (temp->val != 0) {
            sum += temp->val;
        }
        else {
            curr->val = sum;
            curr->next = temp->next;
            curr = curr->next;
            sum = 0;
        }

        temp = temp->next;
    }

    return head;
}