class Solution {
public:
void func(int ind,int target,vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds,int n)
{
    if(ind == n)
    {
        if(target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if(nums[ind]<=target)
    {
        ds.push_back(nums[ind]);
        func(ind,target - nums[ind],nums,ans,ds,n);
        ds.pop_back();
    }
    func(ind + 1,target,nums,ans,ds,n);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = candidates.size();
        func(0,target,candidates,ans,ds,n);
        return ans;
    }
};
