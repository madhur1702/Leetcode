class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        long long lsum  =0;
        for(int i : nums)
        {
            lsum += i;
        }
        long long rprod = 1;
        for(int i=n-1;i>=0;i--)
        {
            lsum -= nums[i];
            if(lsum == rprod)
            {
                return i;
            }
            if(rprod > lsum/nums[i])
            {
                break;
            }
            rprod *= nums[i];
        }
        return -1;
    }
};
