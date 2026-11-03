class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int n = nums.size();
        maxi = maxi*n;
        for(int i = 0;i<n;i++)
        {
            maxi = maxi - nums[i];
        }
        return maxi;
    }
};
