class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> hash;
        for(char c : s)
        {
            hash[c]++;
        }
        vector<pair<char,int>> v(hash.begin(),hash.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second> b.second;
        });
        string res = "";
        for(auto &p : v)
        {
            res += string(p.second,p.first);
        }
        return res;
    }
};
