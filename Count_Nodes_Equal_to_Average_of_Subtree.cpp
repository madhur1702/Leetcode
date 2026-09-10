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
pair<int,int> postorder(TreeNode* root,int &cnt)
{
    if(root == NULL)
    {
        return {0,0};
    }
    pair<int,int> left = postorder(root->left,cnt);
    pair<int,int> right = postorder(root->right,cnt);
    int sum = left.first + right.first + root->val;
    int count = left.second + right.second + 1;
    if(sum/count == root->val)
    {
        cnt++;
    }
    return {sum,count};
}
    int averageOfSubtree(TreeNode* root) {
        int cnt = 0;
        postorder(root,cnt);
        return cnt;
    }
};
