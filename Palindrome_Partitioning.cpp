class Solution {
public:
void func(int ind,string s,vector<string>& ds,vector<vector<string>>& ans)
{
    if(ind == s.size())
    {
        ans.push_back(ds);
        return;
    }
    for(int i = ind;i<s.size();i++)
    {
        if(ispalindrome(s,ind,i))
        {
            ds.push_back(s.substr(ind,i - ind + 1));
            func(i+1,s,ds,ans);
            ds.pop_back();
        }
    }
}
bool ispalindrome(string s,int start,int last)
{
    while(start<=last)
    {
        if(s[start++]!=s[last--]) return false;
    }
    return true;
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        func(0,s,ds,ans);
        return ans;
    }
};
