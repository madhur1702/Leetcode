class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        int i;
        for(i=0;i<m;i++)
        {
            if(haystack[i]==needle[0])
            {
                int j = 0;
                while(j<n && haystack[i+j] == needle[j])
                {
                    j++;
                }
                if(j == n)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
