/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int count(struct TreeNode* root){
    if(root == NULL){
        return 0;
    }

    return 1 + count(root->left) + count(root->right);
}

void inorder(struct TreeNode* root,int a[], int n, int* i){
    if(root == NULL){
        return;
    }

    inorder(root->left,a,n,i);
    a[*i] = root->val;
    (*i)++;
    inorder(root->right,a,n,i);
}
struct TreeNode* increasingBST(struct TreeNode* root) {
    int n = count(root);

    int a[n];
    int i = 0;

    inorder(root,a,n,&i);

        struct TreeNode* newroot = NULL;
    struct TreeNode* temp = NULL;

    int j = 0;

    while(j < n) {
        struct TreeNode* newnode =
            (struct TreeNode*)malloc(sizeof(struct TreeNode));

        newnode->val = a[j];
        newnode->left = NULL;
        newnode->right = NULL;

        if(newroot == NULL) {
            newroot = newnode;
            temp = newnode;
        }
        else {
            temp->right = newnode;
            temp = newnode;
        }

        j++;
    }

    return newroot;
}