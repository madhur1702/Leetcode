class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n = nums.size();
        long long sum = 0;
        for(int i = 0;i<k;i++)
        {
            if(mul!=0)
            {
                long long multi = nums[i];
                multi *= mul;
                sum += multi;
                mul--;
            }else
            {
                sum += nums[i];
            }
        }
        return sum;
    }
};
