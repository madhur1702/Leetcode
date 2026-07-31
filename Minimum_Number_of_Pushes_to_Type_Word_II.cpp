class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<int,int> hash;
        for(char c : word)
        {
            hash[c]++;
        }
        vector<int> nums;
        for(auto it : hash)
        {
            nums.push_back(it.second);
        }
        int ans = 0;
        sort(nums.begin(),nums.end(),greater<int>());
        int i = 0;
        for(int it : nums)
        {
            ans += ((i/8)+1)*it;
            i++;
        }
        return ans;
    }
};
