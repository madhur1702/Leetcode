class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int left = -1,right = -1,ans = INT_MAX;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(nums[i] == 1)
            {
                left = i;
            }else if(nums[i] == 2)
            {
                right = i;
            }
            if(left!=-1 && right!=-1)
            {
                ans = min(ans,abs(left - right));
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};
