class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mini = INT_MAX,maxi = INT_MIN;
        for(int i : nums)
        {
            maxi = max(maxi,i);
            mini = min(mini,i);
        }
        return (long long) (maxi - mini)*k;
    }
};
