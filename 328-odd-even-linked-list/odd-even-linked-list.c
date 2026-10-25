/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int count(struct ListNode* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

struct ListNode* oddEvenList(struct ListNode* head) {
    int n = count(head);

    if(n == 0){
        return NULL;
    }

    int a[n];

    struct ListNode* odd = head;
    struct ListNode* even = head;

    int val = 1;
    int i = 0;
    while(odd != NULL){
        if(val % 2 != 0){
            a[i] = odd->val;
            i++;
        }
        odd = odd->next;
        val++;
    }

    val = 1;
    while(even != NULL){
        if(val % 2 == 0){
            a[i] = even->val;
            i++;
        }
        even = even->next;
        val++;
    }

    struct ListNode* temp = head;

    int j = 0;
    while(j < n){
        temp->val = a[j];
        temp = temp->next;
        j++;
    }

    return head;
}