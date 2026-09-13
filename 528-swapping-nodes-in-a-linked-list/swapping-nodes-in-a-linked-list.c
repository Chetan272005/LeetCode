/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int check(struct ListNode* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode* p = head;
    struct ListNode* q = head;

    int n = check(head);

    int i = 1;
    while(i < k){
        p = p->next;
        i++;
    }

    int j = 1;
    while(j < n-k+1){
        q = q->next;
        j++;
    }

    int temp = p->val;
    p->val = q->val;
    q->val = temp;

    return head;
}