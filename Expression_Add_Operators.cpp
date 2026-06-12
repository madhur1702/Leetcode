class Solution {
public:
    void dfs(int ind, string num, int target, long long val,long long last,string s,
               vector<string>& ans) {
        if (ind == num.size()) {
            if (target == val) {
                ans.push_back(s);
            }
            return;
        }
        for (int i = ind; i < num.size(); i++) {
            if (i > ind && num[ind] == '0')
                return;
            string no = num.substr(ind, i - ind + 1);
            long long curr = stoll(no);
            if (ind == 0) {
                dfs(i+1,num,target,curr,curr,no,ans);
            }
            else
            {
                dfs(i+1,num,target,val + curr,curr,s + "+" + no,ans);
                dfs(i+1,num,target,val - curr,-curr,s + "-" + no,ans);
                dfs(i+1,num,target,val - last + last * curr,last * curr,s + "*" + no,ans);
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        dfs(0, num, target, 0, 0, "", ans);
        return ans;
    }
};
