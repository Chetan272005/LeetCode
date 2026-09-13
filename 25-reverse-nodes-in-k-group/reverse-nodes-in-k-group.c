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
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    if (k == 1){
        return head;
    }
    int n = check(head);
    int a[n];
    int i = 0;
    struct ListNode* temp = head;
    while(temp != NULL){
        a[i] = temp->val;
        temp = temp->next;
        i++;
    }
    int count = 0;
    int p = k;
    while(k <= n){
        int j = 0 + count*p;
        int m = k-1;
        while(j <= m){
            int temp = a[j];
            a[j] = a[m];
            a[m] = temp;
            j++;
            m--;
        }
        k = k + p;
        count++;
    }
    struct ListNode* temp1 = head;
    int x = 0;
    while(x < n){
        temp1->val = a[x];
        x++;
        temp1 = temp1->next;
    }
    return head;
}