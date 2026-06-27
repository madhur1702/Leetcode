class Solution {
public:
    void func(vector<int>& ds, vector<vector<int>>& ans, vector<int>& freq,
              vector<int>& nums) {
                if(ds.size() == nums.size())
                {
                    ans.push_back(ds);
                    return;
                }
                for(int i = 0;i<nums.size();i++)
                {
                    if(!freq[i])
                    {
                        ds.push_back(nums[i]);
                        freq[i] = 1;
                        func(ds,ans,freq,nums);
                        ds.pop_back();
                        freq[i] = 0;
                    }
                }
              }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        int n = nums.size();
        vector<int> freq(n, 0);
        vector<vector<int>> ans;
        func(ds, ans, freq, nums);
        return ans;
    }
};
