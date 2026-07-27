class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = -1,slargest = -1;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(largest<nums[i])
            {
                slargest = largest;
                largest = nums[i];
            }else if(slargest<nums[i])
            {
                slargest = nums[i];
            }
        }
        largest--;
        slargest--;
        return largest*slargest;
    }
};
