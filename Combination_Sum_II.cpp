class Solution {
public:
void func(int ind,int target,vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds)
{
    if(target == 0)
    {
        ans.push_back(ds);
        return;
    }
    for(int i = ind;i<nums.size();i++)
    {
        if(i>ind && nums[i] == nums[i-1]) continue;
        if(nums[i]>target) break;
        ds.push_back(nums[i]);
        func(i+1,target - nums[i],nums,ans,ds);
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        func(0,target,candidates,ans,ds);
        return ans;
    }
};
