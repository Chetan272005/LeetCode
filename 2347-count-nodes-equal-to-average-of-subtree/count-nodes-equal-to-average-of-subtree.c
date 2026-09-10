int ans = 0;

int* dfs(struct TreeNode* root) {
    int* result = malloc(2 * sizeof(int));

    if(root == NULL) {
        result[0] = 0;
        result[1] = 0;
        return result;
    }

    int* left = dfs(root->left);
    int* right = dfs(root->right);

    int sum = left[0] + right[0] + root->val;
    int count = left[1] + right[1] + 1;

    if(sum / count == root->val) {
        ans++;
    }

    result[0] = sum;
    result[1] = count;

    free(left);
    free(right);

    return result;
}

int averageOfSubtree(struct TreeNode* root) {
    ans = 0;

    int* result = dfs(root);

    free(result);

    return ans;
}