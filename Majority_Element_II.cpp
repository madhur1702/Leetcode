class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();
        int count = 1;
        int n = size/3;
        vector<int> result;
        sort(nums.begin(),nums.end());
        for(int i=1;i<size;i++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
            }
            else
            {
                if(count>n)
                {
                    result.push_back(nums[i-1]);
                }
                count = 1;
            }
        }
        if(count>n)
        {
            result.push_back(nums[size-1]);
        }
        sort(result.begin(),result.end());
        return result;
    }
};
