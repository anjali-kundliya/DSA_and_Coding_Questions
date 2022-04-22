/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
    TreeNode *prev = NULL;
    TreeNode *firstEle = NULL;
    TreeNode *secondEle = NULL;

    void inOrder(TreeNode *root)
    {
        if (!root)
            return;
        inOrder(root -> left);
        if (prev != NULL && prev -> val > root -> val)
        {
            if (!firstEle)
                firstEle = prev;
            secondEle = root;
        }
        prev = root;
        inOrder(root -> right);
    }

    void recoverTree(TreeNode* root) {
        inOrder(root);
        swap(firstEle -> val, secondEle -> val);
    }
};
