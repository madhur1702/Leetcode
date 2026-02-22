class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int,int> hash;
        hash[0] = 1;
        int n = nums.size();
        int cnt = 0;
        for(int i = 0;i<n;i++)
        {
            sum += nums[i];
            int required = sum - k;
            if(hash.find(required)!=hash.end())
            {
                cnt += hash[required];
            }
            hash[sum]++;
        }
        return cnt;
    }
};
