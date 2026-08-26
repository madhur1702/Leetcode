class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int l = 0;
        int ones = 0;
        string ans = "";
        for(int r =0;r<n;r++)
        {
            if(s[r] == '1')
            {
                ones++;
            }
            while(ones>k)
            {
                if(s[l] == '1')
                {
                    ones--;
                }
                l++;
            }
            if(ones == k)
            {
                while(l<r && s[l] == '0')
                {
                    l++;
                }
                string t = s.substr(l,r-l+1);
                if(ans == "" ||t.size()<ans.size())
                {
                    ans = t;
                }
                else if(t.size() == ans.size() && t<ans)
                {
                    ans = t;
                }
            }
        }
        return ans;
    }
};
