/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {

    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;

    while (1) {

        int index = -1;
        int min = 0;

        // Find the list having the smallest current node
        for (int i = 0; i < listsSize; i++) {

            if (lists[i] != NULL) {

                if (index == -1 || lists[i]->val < min) {
                    min = lists[i]->val;
                    index = i;
                }
            }
        }

        // All lists are finished
        if (index == -1) {
            break;
        }

        // Take the node from that list
        struct ListNode* temp = lists[index];

        // Move that list forward
        lists[index] = lists[index]->next;

        // Insert the node into answer list
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    return head;
}