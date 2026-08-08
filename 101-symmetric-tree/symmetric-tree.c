/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSymmetric(struct TreeNode* root) {

    if (root == NULL)
        return true;

    struct TreeNode *stack1[1000];
    struct TreeNode *stack2[1000];

    int top = 0;

    stack1[top] = root->left;
    stack2[top] = root->right;
    top++;

    while (top > 0) {

        top--;

        struct TreeNode *left = stack1[top];
        struct TreeNode *right = stack2[top];

        if (left == NULL && right == NULL)
            continue;

        if (left == NULL || right == NULL)
            return false;

        if (left->val != right->val)
            return false;

        // Mirror pairs
        stack1[top] = left->left;
        stack2[top] = right->right;
        top++;

        stack1[top] = left->right;
        stack2[top] = right->left;
        top++;
    }

    return true;
}