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
int check(struct TreeNode* root){
    if(root == NULL){
        return 0;
    }

    return 1 + check(root->left) + check(root->right);
}

void inorder(struct TreeNode* root, int* x, int* k){
    if(root == NULL){
        return;
    }

    inorder(root->left,x,k);
    x[*k] = root->val;
    (*k)++;
    inorder(root->right,x,k);
}
int* getAllElements(struct TreeNode* root1, struct TreeNode* root2, int* returnSize) {
    int n1 = check(root1);
    int n2 = check(root2);

    int* a = malloc(n1 * sizeof(int));
    int* b = malloc(n2 * sizeof(int));

    int i = 0;
    inorder(root1,a,&i);

    int j = 0;
    inorder(root2,b,&j);

    int* ans = malloc((n1 + n2)*sizeof(int));

    i = 0;
    j = 0;
    int k = 0;

    while(i < n1 && j < n2){
        if(a[i] >= b[j]){
            ans[k] = b[j];
            k++;
            j++;
        }
        else{
            ans[k] = a[i];
            k++;
            i++;
        }
    }

    while(i < n1){
        ans[k] = a[i];
        k++;
        i++;
    }

    while(j < n2){
        ans[k] = b[j];
        k++;
        j++;
    }

    *returnSize = n1 + n2;

    return ans;
}