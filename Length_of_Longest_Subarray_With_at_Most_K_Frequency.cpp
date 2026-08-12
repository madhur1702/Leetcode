class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l = 0,r = 0;
        int maxi = 0;
        int n = nums.size();
        unordered_map<int,int> hash;
        while(r<n)
        {
            hash[nums[r]]++;
            while(hash[nums[r]]>k)
            {
                hash[nums[l]]--;
                l++;
            }
            maxi = max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};
