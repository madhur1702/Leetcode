class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
       for (int i = 0; i < n; i++) {
            bool l = (i - k < 0) || (nums[i] > nums[i - k]);
            bool r = (i + k >= n) || (nums[i] > nums[i + k]);
            if (l && r) {
                sum += nums[i];
            }
        }
        return sum;
    }
};
