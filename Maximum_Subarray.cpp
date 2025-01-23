class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int current = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            current = max(nums[i],current+nums[i]);
            maxsum = max(maxsum,current);
        }
        return maxsum;
    }
};
