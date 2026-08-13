class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string t = "";
        int n = words.size();
        int m = s.size();
        int size = 0;
        for(int i = 0;i<n;i++)
        {
            size += words[i].size();
            t += words[i];
            if(s == t)
            {
                return true;
            }else if(m<size)
            {
                return false;
            }
        }
        return false;
    }
};
