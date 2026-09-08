/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
void parentmap(TreeNode* root,unordered_map<TreeNode*,TreeNode*> & parent)
{
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* node = q.front();
        q.pop();
        if(node->left)
        {
            parent[node->left] = node;
            q.push(node->left);
        }
        if(node->right)
        {
            parent[node->right] = node;
            q.push(node->right);
        }
    }
}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> parent;
        parentmap(root,parent);
        queue<TreeNode*> q;
        q.push(target);
        unordered_map<TreeNode*,bool> vis;
        vis[target] = true;
        int distance = 0;
        while(!q.empty())
        {
            int size = q.size();
            if(distance++ == k) break;
            for(int i  = 0;i<size;i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left && !vis[curr->left])
                {
                    vis[curr->left] = true;
                    q.push(curr->left);
                }
                if(curr->right && !vis[curr->right])
                {
                    vis[curr->right] = true;
                    q.push(curr->right);
                }
                if(parent[curr] && !vis[parent[curr]])
                {
                    vis[parent[curr]] = true;
                    q.push(parent[curr]);
                }
            }
        }
        vector<int> result;
        while(!q.empty())
        {
            result.push_back(q.front()->val);
            q.pop();
        }
        return result;
    }
};
