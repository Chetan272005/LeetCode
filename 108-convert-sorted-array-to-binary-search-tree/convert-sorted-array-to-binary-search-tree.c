/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
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

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {

    return buildBST(nums,0,numsSize-1);
}