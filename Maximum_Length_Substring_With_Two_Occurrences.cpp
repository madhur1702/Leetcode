class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0,r = 0;
        int maxi = 0;
        int n = s.size();
        unordered_map<char,int> hash;
        while(r<n)
        {
            hash[s[r]]++;
            while(hash[s[r]]>2)
            {
                hash[s[l]]--;
                l++;
            }
            maxi = max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};
