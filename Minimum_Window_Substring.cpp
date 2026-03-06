class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        vector<int> have(128,0),need(128,0);
        for(char c: t)
        {
            need[c]++;
        }
        int req = t.size();
        int left = 0,minlen = INT_MAX;
        int start = -1;
        int cnt = 0;
        for(int right = 0;right<n;right++)
        {
            have[s[right]]++;
            if(have[s[right]]<=need[s[right]])
            {
                cnt++;
            }
            while(cnt == req)
            {
                if(right-left+1<minlen)
                {
                    minlen = right - left + 1;
                    start = left;
                }
                have[s[left]]--;
                if(have[s[left]]<need[s[left]])
                {
                    cnt--;
                }
                left++;
            }
        }
        if(start == -1)
        {
            return "";  
        }
        return s.substr(start,minlen);
    }
};
