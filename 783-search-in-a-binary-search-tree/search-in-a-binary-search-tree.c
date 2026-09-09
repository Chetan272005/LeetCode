/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int countNodes(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

void storeNodes(struct TreeNode* root, int arr[], int *i) {
    if (root == NULL)
        return;

    arr[*i] = root->val;
    (*i)++;

    storeNodes(root->left, arr, i);
    storeNodes(root->right, arr, i);
}

struct TreeNode* searchBST(struct TreeNode* root, int val) {
    
    struct TreeNode* temp = root;

    while (temp != NULL) {

        if (temp->val == val)
            break;

        if (val < temp->val)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if (temp == NULL)
        return NULL;

    int count = countNodes(temp);

    int arr[count];

    int i = 0;
    storeNodes(temp, arr, &i);

    return temp;
}