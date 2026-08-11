class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> hash;
        int total = nums[0];
        int a = 0;
        hash[nums[0]] = 1;
        for(int i = 1;i<n;i++)
        {
            if(a == 0 && nums[i] == nums[i-1]+1)
            {
                total += nums[i];
            }else
            {
                a = 1;
            }
            hash[nums[i]] = 1;
        }
        while(hash[total] == 1)
        {
            total++;
        }
        return total;
    }
};
