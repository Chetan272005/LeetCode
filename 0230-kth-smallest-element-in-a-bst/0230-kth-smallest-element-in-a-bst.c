/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int count(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    return 1 + count(root->left) + count(root->right);
}

void inorder(struct TreeNode* root, int arr[], int* index) {
    if (root == NULL) {
        return;
    }

    inorder(root->left, arr, index);

    arr[*index] = root->val;
    (*index)++;

    inorder(root->right, arr, index);
}
int kthSmallest(struct TreeNode* root, int k) {
    int n = count(root);
    int* arr = (int*)malloc(n * sizeof(int));
    int index = 0;
    inorder(root, arr, &index);
    return arr[k-1];
}