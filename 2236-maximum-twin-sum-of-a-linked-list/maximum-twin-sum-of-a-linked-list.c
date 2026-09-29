/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int count(struct ListNode* head){
    int val = 0;
    while(head != NULL){
        val++;
        head = head->next;
    }
    return val;
}
int pairSum(struct ListNode* head) {
    if(head == NULL){
        return 0;
    }
    int n = count(head);

    int a[n];

    int i = 0;
    struct ListNode* temp = head;
    while(i < n){
        a[i] = temp->val;
        temp = temp->next;
        i++;
    }

    int first = 0;
    int last = n - 1;
    int max = -1;
    int sum = 0;

    while(first < last){
        sum = a[first] + a[last];
        if(sum > max){
            max = sum;
        }
        first++;
        last--;
    }
    return max;
}