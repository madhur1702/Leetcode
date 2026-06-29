class Solution {
public:
void func(int ind,vector<vector<int>> &ans,vector<int> &nums)
{
    if(ind == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    unordered_set<int> st;
    for(int i= ind;i<nums.size();i++)
    {
        if(st.find(nums[i])!=st.end()) continue;
        st.insert(nums[i]);
        swap(nums[ind],nums[i]);
        func(ind+1,ans,nums);
        swap(nums[ind],nums[i]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        func(0,ans,nums);
        return ans;
    }
};
