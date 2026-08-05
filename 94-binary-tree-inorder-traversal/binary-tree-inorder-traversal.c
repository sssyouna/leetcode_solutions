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
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    struct TreeNode* temp = root;
    int* result = (int*)malloc(100 * sizeof(int));
    struct TreeNode* tab[100];
    int k = 0;

    *returnSize = 0;

    while (temp != NULL || k > 0) {

        while (temp != NULL) {
            tab[k++] = temp;
            temp = temp->left;
        }

        temp = tab[--k];
        result[(*returnSize)++] = temp->val;

        temp = temp->right;
    }

    return result;
}