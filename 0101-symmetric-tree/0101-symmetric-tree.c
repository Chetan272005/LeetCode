/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool check(struct TreeNode* checkleft, struct TreeNode* checkright) {

    if (checkleft == NULL && checkright == NULL) {
        return true;
    }

    if (checkleft == NULL || checkright == NULL) {
        return false;
    }

    if (checkleft->val != checkright->val) {
        return false;
    }

    return check(checkleft->left, checkright->right) &&
           check(checkleft->right, checkright->left);
}

bool isSymmetric(struct TreeNode* root) {

    return check(root, root);
}