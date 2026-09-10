int count(struct TreeNode* root)
{
    if(root == NULL)
        return 0;

    return 1 + count(root->left) + count(root->right);
}

int sum(struct TreeNode* root)
{
    if(root == NULL)
        return 0;

    return root->val + sum(root->left) + sum(root->right);
}

int avg(struct TreeNode* root)
{
    int c = count(root);
    int s = sum(root);

    return s / c;
}

int check(struct TreeNode* root)
{
    if(root->val == avg(root))
        return 1;

    return 0;
}

int solve(struct TreeNode* root)
{
    if(root == NULL)
        return 0;

    int ans = 0;

    if(check(root))
        ans++;

    ans = ans + solve(root->left);
    ans = ans + solve(root->right);

    return ans;
}

int averageOfSubtree(struct TreeNode* root)
{
    return solve(root);
}