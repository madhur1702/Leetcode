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
TreeNode* prev = NULL;
void tree(TreeNode* root)
{
    if(root == NULL) return;
    tree(root->left);
    prev->right = root;
    root->left = NULL;
    prev = root;
    tree(root->right);
}
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);
        prev = dummy;
        tree(root);
        return dummy->right;
    }
};
