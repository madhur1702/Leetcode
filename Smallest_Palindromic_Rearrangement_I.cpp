class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        if(n < 2)
        {
            return s;
        }
        sort(s.begin(),s.end());
        string t = "";
        int ind = -1;
        for(int i =0;i<n;i+=2)
        {
            if(i<n-1 && s[i]!=s[i+1])
            {
                ind = i;
                i++;
            }
                t += s[i];

        }
        if(ind!=-1)
        {
            t += s[ind];
        }
        for(int i =n-2;i>=0;i-=2)
        {
            if(ind == i)
            {
                i--;
            }
                t += s[i];
        }
        return t;
    }
};
