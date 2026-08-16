struct ListNode* swapPairs(struct ListNode* head) {

    if(head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode* first = head;
    struct ListNode* second = head->next;

    first->next = second->next;
    second->next = first;

    head = second;

    first->next = swapPairs(first->next);

    return head;
}