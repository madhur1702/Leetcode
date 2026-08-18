class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==n)
        {
            return *max_element(nums.begin(),nums.end());
        }
        vector<int> arr(51,0);
        for(int i = 0;i<n;i++)
        {
            arr[nums[i]]++;
        }
        if(k == 1)
        {
            for(int i = 50;i>=0;i--)
            {
                if(arr[i] == 1)
                {
                    return i;
                }
            }
        }
        int ans = -1;
        if(arr[nums[0]] == 1)
        {
            ans = max(ans,nums[0]);
        }
        if(arr[nums[n-1]] == 1)
        {
            ans = max(ans,nums[n-1]);
        }
        return ans;
    }
};
