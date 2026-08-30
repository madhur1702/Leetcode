class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int ind1 = 0,ind2 = 0;
        for(int i = 1;i<n;i++)
        {
            if(nums[ind1]>nums[i])
            {
                ind1 = i;
            }
            if(nums[ind2]<nums[i])
            {
                ind2 = i;
            }
        }
        int front = max(ind1,ind2) + 1;
        int back = n - min(ind1,ind2);
        int mix = min(ind1,ind2) + 1 + n - max(ind1,ind2);
        return min(front,min(back,mix));
    }
};
