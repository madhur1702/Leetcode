class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n= s.size();
        vector<int> a(10,-1);
        for(int i=0;i<n;i++)
        {
            a[s[i] - '0'] = i;
        }
        for(int i=0;i<n;i++)
        {
            for(int d = 9;d>s[i]-'0';d--)
            {
                if(a[d]>i)
                {
                    swap(s[i],s[a[d]]);
                    return stoi(s);
                }
            }
        }
        return num;
    }
};
