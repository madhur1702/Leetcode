class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int MOD = 1e9 + 7;
        int n = nums.size();
        vector<int> power(n);
        power[0] = 1;
        for(int i = 1;i<n;i++)
        {
            power[i] = (power[i-1]*2)%MOD;
        }
        int left = 0,right = n - 1,res = 0;
        while(left<=right)
        {
            if(nums[left] + nums[right]<=target)
            {
                res = (res + power[right - left])%MOD;
                left++;
            }else{
                right--;
            }
        }
        return res;
    }
};
