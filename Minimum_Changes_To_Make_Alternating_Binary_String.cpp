class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int cnt1 = 0,cnt2 = 0;
        for (int i = 0; i < n; i++) {
            char expected = (i%2)?'0':'1';
            if(s[i]!=expected)
            {
                cnt1++;
            }
            char expect = (i%2)?'1':'0';
            if(s[i] != expect)
            {
                cnt2++;
            }
        }
        return min(cnt1,cnt2);
    }
};
