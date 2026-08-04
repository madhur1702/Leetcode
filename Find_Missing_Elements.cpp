class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini= nums[0],maxi = nums[0];
        for(int i : nums)
        {
            mini = min(mini,i);
            maxi = max(maxi,i);
        }
        vector<int> arr;
        sort(nums.begin(),nums.end());
        int j = 1;
        for(int i =mini+1;i<maxi;i++)
        {
            if(nums[j]!=i)
            {
                arr.push_back(i);
            }else
            {
                j++;
            }
        }
        return arr;
    }
};
