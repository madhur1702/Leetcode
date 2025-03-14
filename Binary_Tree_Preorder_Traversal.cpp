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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> t;
        if(root == nullptr)
        {
            return t;
        }
        t.push_back(root->val);
        vector<int> l = preorderTraversal(root->left);
        vector<int> r = preorderTraversal(root->right);
        t.insert(t.end(),l.begin(),l.end());
        t.insert(t.end(),r.begin(),r.end());
        return t;
    }
};
