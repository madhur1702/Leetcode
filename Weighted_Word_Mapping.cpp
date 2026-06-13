class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s = "";
        int n = words.size();
        string alp = "zyxwvutsrqponmlkjihgfedcba";
        for(int i = 0;i<n;i++)
        {
            int sum = 0;
            for(int j = 0;j<words[i].size();j++)
            {
                sum += weights[words[i][j] - 'a'];
            }
            sum = sum%26;
            s.push_back(alp[sum]);
        }
        return s;
    }
};
