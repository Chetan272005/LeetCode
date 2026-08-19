#include <stdbool.h>

int countNodes(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    return 1 + countNodes(root->left) + countNodes(root->right);
}

void inorder(struct TreeNode* root, int a[], int *i) {
    if (root == NULL) {
        return;
    }

    inorder(root->left, a, i);

    a[*i] = root->val;
    (*i)++;

    inorder(root->right, a, i);
}

int loop(int a[], int n) {
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            count++;
        }
    }

    return count;
}

bool isValidBST(struct TreeNode* root) {

    int n = countNodes(root);

    int a[n];

    int i = 0;

    inorder(root, a, &i);

    int m = loop(a, n);

    if (m == n - 1) {
        return true;
    }

    return false;
}