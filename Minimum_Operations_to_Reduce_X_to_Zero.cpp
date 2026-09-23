class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        map<long long,int> mp;
        long long total = 0;
        for(int i : nums) total += i;
        long long target = total - x;
        int n = nums.size();
        if(target == 0) return n;
        long long sum = 0;
        int maxi = -1;
        mp[0] = -1;
        for(int i = 0;i<n;i++)
        {
            sum += nums[i];
            long long rem = sum - target;
            if(mp.find(rem)!=mp.end())
            {
                int len = i - mp[rem];
                maxi = max(maxi,len);
            }
            if(mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }
        return maxi != -1 ? n - maxi : -1;
    }
};
