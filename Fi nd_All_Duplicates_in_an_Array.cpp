class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i<n-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};
