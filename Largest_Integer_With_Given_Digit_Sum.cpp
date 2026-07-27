class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>9*n) return -1;
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            int digit = min(s,9);
            ans = ans*10 + digit;
            s -= digit;
        }
        return ans;
    }
};
