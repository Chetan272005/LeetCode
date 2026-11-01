
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int count(struct ListNode* head) {
    int count = 0;

    while (head != NULL) {
        count++;
        head = head->next;
    }

    return count;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {

    if (head == NULL || head->next == NULL) {
        return head;
    }

    int n = count(head);

    int a[n];
    int b[2*n - 1];

    struct ListNode* temp = head;

    int i = 0;

    while (i < n) {
        a[i] = temp->val;
        temp = temp->next;
        i++;
    }

    int j = 0;
    i = 0;

    while (j < (2*n - 1)) {

        if (j % 2 == 0) {
            b[j] = a[i];
            i++;
        }
        else {
            b[j] = gcd(a[i-1], a[i]);
        }

        j++;
    }

    struct ListNode* newHead = NULL;
    struct ListNode* tail = NULL;

    j = 0;

    while (j < (2*n - 1)) {

        struct ListNode* newNode =
            (struct ListNode*)malloc(sizeof(struct ListNode));

        newNode->val = b[j];
        newNode->next = NULL;

        if (newHead == NULL) {
            newHead = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }

        j++;
    }

    return newHead;
}
