class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string t = "";
        string u = "";
        unordered_map<string, string> hash;
        for (int i = 0; i < knowledge.size(); i++) {
            hash[knowledge[i][0]] = knowledge[i][1];
        }
        int n = s.size();
        int i = 0;
        while (i < n) {
            if (s[i] == '(') {
                i++;
                while (i < n && s[i] != ')') {
                    u += s[i];
                    i++;
                }
                if (hash.find(u) != hash.end()) {
                    t += hash[u];
                } else {
                    t += '?';
                }
                u = "";
                i++;
            } else {
                t += s[i];
                i++;
            }
        }
        return t;
    }
};

