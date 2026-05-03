class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size();
        int m = spaces.size();
        string t = "";
        int j = 0;
        for(int i = 0;i<n;i++)
        {
            if(j<m && i == spaces[j])
            {
                t += " ";
                t += s[i];
                j++;
            }
            else
            {
                t += s[i];
            }
        }
        return t;
    }
};
