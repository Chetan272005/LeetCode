int countNodes(struct TreeNode* root)
{
    if (root == NULL)
        return 0;

    int leftHeight = 0;
    int rightHeight = 0;

    struct TreeNode* temp = root;

    while (temp != NULL)
    {
        leftHeight++;
        temp = temp->left;
    }

    temp = root;

    while (temp != NULL)
    {
        rightHeight++;
        temp = temp->right;
    }

    if (leftHeight == rightHeight)
        return (1 << leftHeight) - 1;

    return 1 + countNodes(root->left) + countNodes(root->right);
}