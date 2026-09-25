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
void inorder(struct TreeNode* root, int a[], int* i){
    if(root == NULL){
        return;
    }

    inorder(root->left,a,i);
    a[*i] = root->val;
    (*i)++;
    inorder(root->right,a,i);
}

bool findTarget(struct TreeNode* root, int k) {
    int n = count(root);
    int arr[n];

    int i = 0;
    inorder(root,arr,&i);

    int first = 0;
    int last = n-1;

    while(first < last){
        if(arr[first] + arr[last] == k){
            return true;
        }
        else if(arr[first] + arr[last] > k){
            last--;
        }
        else if(arr[first] + arr[last] < k){
            first++;
        }
    }
    return false;
}