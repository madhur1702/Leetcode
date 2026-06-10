class Solution {
public:
void func(int sum,int last,vector<int>& ds,int k,vector<vector<int>>& ans)
{
    if(sum == 0 && ds.size() == k)
    {
        ans.push_back(ds);
        return;
    }
    if(sum<=0 || ds.size()>k) return;
    for(int i = last;i<=9;i++)
    {
        if(i<=9)
        {
            ds.push_back(i);
            func(sum-i,i+1,ds,k,ans);
            ds.pop_back();
        }else break;
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        func(n,1,ds,k,ans);
        return ans;
    }
};
