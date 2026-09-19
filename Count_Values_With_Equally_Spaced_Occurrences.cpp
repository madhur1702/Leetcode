class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> hash;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            hash[nums[i]].push_back(i);
        }
        int cnt = 0;
        for(auto it : hash)
        {
            if(it.second.size() == 3 && abs(it.second[0]-it.second[1]) == abs(it.second[1] - it.second[2]))
            {
                cnt++;
            }
        }
        return cnt;
    }
};
