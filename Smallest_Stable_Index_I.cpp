class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            int maxi = nums[i],mini = nums[i];
            for(int j = 0;j<i;j++)
            {
                maxi = max(maxi,nums[j]);
            }
            for(int j = i+1;j<n;j++)
            {
                mini = min(mini,nums[j]);
            }
            if(maxi - mini <= k)
            {
                return i;
            }
        }
        return -1;
    }
};
