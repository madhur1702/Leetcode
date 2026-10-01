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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(!root) return ans;
        vector<int> arr;
        path(root,0,targetSum,ans,arr);
        return ans;
    }
    void path(TreeNode* root,int sum,int target,vector<vector<int>> &ans,vector<int> arr)
    {
        if(!root) return;
        sum += root->val;
        arr.push_back(root->val);
        if(root->left == NULL && root->right == NULL)
        {
            if(sum == target) ans.push_back(arr);
            return;
        }
        path(root->left,sum,target,ans,arr);
        path(root->right,sum,target,ans,arr);
    }
};
