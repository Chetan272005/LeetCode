int count(struct TreeNode* root) {
    if(root == NULL) {
        return 0;
    }

    return 1 + count(root->left) + count(root->right);
}

void preorder(struct TreeNode* root, int* i, int* a) {
    if(root == NULL) {
        return;
    }

    a[*i] = root->val;
    (*i)++;

    preorder(root->left, i, a);
    preorder(root->right, i, a);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int n = count(root);

    int* a = malloc(n * sizeof(int));

    int i = 0;

    preorder(root, &i, a);

    *returnSize = n;

    return a;
}