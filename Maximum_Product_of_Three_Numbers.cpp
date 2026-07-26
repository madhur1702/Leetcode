class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int largest = INT_MIN,slargest = INT_MIN,tlargest = INT_MIN;
        int mini1 = 0,mini2 = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(nums[i]>=largest)
            {
                tlargest = slargest;
                slargest = largest;
                largest = nums[i];
            }
            else if(nums[i]>=slargest)
            {
                tlargest = slargest;
                slargest = nums[i];
            }
            else if(nums[i]>=tlargest)
            {
                tlargest = nums[i];
            }
            if(mini1>=nums[i])
            {
                mini2 = mini1;
                mini1 = nums[i];
            }else if(mini2>=nums[i])
            {
                mini2 = nums[i];
            }
        }
        return max(largest*slargest*tlargest,mini1*mini2*largest);
    }
};
