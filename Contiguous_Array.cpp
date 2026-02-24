class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                nums[i] = -1;
            }
        }
        int n = nums.size();
        int prefix = nums[0],maxi = 0;
        unordered_map<int,int> hash;
        hash[prefix] = 0;
        for(int i=1;i<n;i++)
        {
            prefix += nums[i];
            if(prefix == 0)
            {
                maxi = i + 1;
            }
            if(hash.find(prefix)!=hash.end())
            {
                maxi = max(maxi,i-hash[prefix]);
            }else
            {
                hash[prefix] = i;
            }
        }
        return maxi;
    }
};
