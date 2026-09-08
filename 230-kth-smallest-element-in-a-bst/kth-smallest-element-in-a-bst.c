int count(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    return 1 + count(root->left) + count(root->right);
}

int inorder(struct TreeNode* root, int arr[], int* index, int k) {
    if (root == NULL) {
        return 0;
    }

    inorder(root->left, arr, index, k);

    if (*index == k) {
        return arr[k - 1];
    }

    arr[*index] = root->val;
    (*index)++;

    if (*index == k) {
        return arr[k - 1];
    }

    return inorder(root->right, arr, index, k);
}

int kthSmallest(struct TreeNode* root, int k) {
    int n = count(root);

    int* arr = (int*)malloc(n * sizeof(int));

    int index = 0;

    int answer = inorder(root, arr, &index, k);

    free(arr);

    return answer;
}