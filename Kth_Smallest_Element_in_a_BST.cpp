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
void inorder(TreeNode* root,int k,int& cnt,priority_queue<int>& pq)
{
    if(root == NULL) return;
    inorder(root->left,k,cnt,pq);
    if(cnt < k)
    {
        pq.push(root->val);
        cnt++;
    }
    else
    {
        if(root->val < pq.top())
        {
            pq.pop();
            pq.push(root->val);
        }
    }
    inorder(root->right,k,cnt,pq);
}
    int kthSmallest(TreeNode* root, int k) {
        int cnt = 0;
        priority_queue<int> pq;
        inorder(root,k,cnt,pq);
        return pq.top();
    }
};
