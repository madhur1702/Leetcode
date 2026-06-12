class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0; 
        for(int i = 0;i<k;i++)
        {
            sum += nums[i];
        }
        double maxi = (double)sum/k;
        for(int i = k;i<n;i++)
        {
            sum -= nums[i-k];
            sum += nums[i];
            maxi = max(maxi,(double)sum/k);
        }
        return maxi;
    }
};
