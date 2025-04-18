class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int j;
        for (j = n - 2; j >= 0; j--) {
            if (nums[j] < nums[j + 1]) {
                break;
            }
        }
        int i;
        if (j >= 0) {
            for (i = n - 1; i >= 0; i--) {
                if (nums[i] > nums[j]) {
                    break;
                }
            }
            swap(nums[j], nums[i]);
        }
        sort(nums.begin()+j+1,nums.end());
    }
};
