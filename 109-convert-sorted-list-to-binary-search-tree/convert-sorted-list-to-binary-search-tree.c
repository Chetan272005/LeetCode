#include <stdlib.h>

struct TreeNode* buildBST(int arr[], int low, int high) {
    if (low > high) {
        return NULL;
    }

    int mid = low + (high - low) / 2;

    struct TreeNode* root = malloc(sizeof(struct TreeNode));

    root->val = arr[mid];
    root->left = buildBST(arr, low, mid - 1);
    root->right = buildBST(arr, mid + 1, high);

    return root;
}

struct TreeNode* sortedListToBST(struct ListNode* head) {
    int size = 0;
    struct ListNode* temp = head;

    if(head == NULL){
        return NULL;
    }

    while (temp != NULL) {
        size++;
        temp = temp->next;
    }

    int arr[size];
    temp = head;

    for (int i = 0; i < size; i++) {
        arr[i] = temp->val;
        temp = temp->next;
    }

    return buildBST(arr, 0, size - 1);
}