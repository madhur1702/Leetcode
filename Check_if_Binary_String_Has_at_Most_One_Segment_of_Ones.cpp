class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1' && (i == 0 || s[i-1] == '0'))
            {
                cnt++;
            }
        }
        return cnt <= 1;
    }
};
