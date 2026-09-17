/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int count(struct TreeNode* root){
    if(root == NULL){
        return 0;
    }

    return 1 + count(root->left) + count(root->right);
}
void postorder(struct TreeNode* root, int* i, int* a){
    if(root == NULL){
        return;
    }

    postorder(root->left,i,a);

    postorder(root->right,i,a);

    a[*i] = root->val;
    (*i)++;

}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int n = count(root);

    int* a = malloc(n*sizeof(int));

    int i = 0;

    postorder(root,&i,a);

    *returnSize = n;

    return a;
}