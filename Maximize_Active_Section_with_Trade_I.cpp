class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones = 0;
        for(int i =0;i<s.size();i++)
        {
            if(s[i] == '1')
            {
                ones++;
            }
        }
        s = "1" + s + "1";
        int cnt = 1;
        vector<pair<char,int>> nums;
        for(int i = 1;i<s.size();i++)
        {
            if(s[i] == s[i-1])
            {
                cnt++;
            }else{
                nums.push_back({s[i-1],cnt});
                cnt=1;
            }
        }
        nums.push_back({s.back(),cnt});
        int ans = ones;
        for(int i = 1;i+1<nums.size();i++)
        {
            if(nums[i].first == '1' && nums[i-1].first == '0' && nums[i+1].first == '0')
            {
                int left = nums[i-1].second;
                int right = nums[i+1].second;
                ans = max(ans,ones + left + right);
            }
        }
        return ans;
    }
};
