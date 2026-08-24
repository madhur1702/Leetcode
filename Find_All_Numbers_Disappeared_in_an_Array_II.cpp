class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower,
                                               int upper) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int i = 0;
        int start = -1;
        while(i<nums.size() && nums[i]<lower)
        {
            i++;
        }
        while (lower <= upper) {
            if (i < nums.size() && lower == nums[i]) {
                while (i < nums.size() && lower == nums[i]) {
                    i++;
                }
                if (start != -1) {
                    ans.push_back({start, lower - 1});
                    start = -1;
                }
            } else {
                if (start == -1)
                    start = lower;
            }
            lower++;
        }
        if (start != -1)
            ans.push_back({start, upper});
        return ans;
    }
};
