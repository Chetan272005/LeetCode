struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {

    struct TreeNode* original = root;

    if(root == NULL){
        struct TreeNode* newNode = malloc(sizeof(struct TreeNode));
        newNode->val = val;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    while(root != NULL){

        if(root->val > val){

            if(root->left == NULL){
                struct TreeNode* newNode = malloc(sizeof(struct TreeNode));
                newNode->val = val;
                newNode->left = NULL;
                newNode->right = NULL;
                root->left = newNode;
                return original;
            }

            root = root->left;
        }

        else if(root->val < val){

            if(root->right == NULL){
                struct TreeNode* newNode = malloc(sizeof(struct TreeNode));
                newNode->val = val;
                newNode->left = NULL;
                newNode->right = NULL;
                root->right = newNode;
                return original;
            }

            root = root->right;
        }
    }

    return original;
}