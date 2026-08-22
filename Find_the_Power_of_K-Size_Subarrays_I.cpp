class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> arr;
        int n = nums.size();
        if(n == 1 || k == 1) return nums;
        int a = 1;
        for (int i = 0; i < n - k + 1; i++) {
            int a = 1;
            int el = nums[i];
            for (int j = i; j < i + k; j++) {
                if (nums[j] != el) {
                    a = 0;
                }
                el++;
            }
            if (a == 1) {
                arr.push_back(el-1);
            } else {
                arr.push_back(-1);
            }
        }
        return arr;
    }
};
