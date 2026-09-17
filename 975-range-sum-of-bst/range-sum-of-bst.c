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
void inorder(struct TreeNode* root, int* i, int* a){
    if(root == NULL){
        return;
    }

    inorder(root->left,i,a);

    a[*i] = root->val;
    (*i)++;

    inorder(root->right,i,a);
}
int rangeSumBST(struct TreeNode* root, int low, int high) {

    int n = count(root);

    int* a =malloc(n*sizeof(int));

    int i = 0;

    inorder(root,&i,a);

    int j = 0;
    int sum = 0;
    while(j < n){
        if(a[j] >= low && a[j] <= high){
            sum = sum + a[j];
        }
        j++;
    }
    return sum;
}