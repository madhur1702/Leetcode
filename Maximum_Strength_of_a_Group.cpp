class Solution {
public:
    void func(int ind, long long multi, int n, vector<long long>& ds,
              vector<int>& nums,bool taken) {
        if (ind == n) {
            if(taken) ds.push_back(multi);
            return;
        }
        func(ind + 1, multi * nums[ind], n, ds, nums,true);
        func(ind + 1, multi, n, ds, nums,taken);
    }
    long long maxStrength(vector<int>& nums) {
        long long maxi = 0;
        int n = nums.size();
        vector<long long> ds;
        func(0, 1, n, ds, nums,false);
        maxi = *max_element(ds.begin(), ds.end());
        return maxi;
    }
};
