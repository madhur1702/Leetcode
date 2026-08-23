class Solution {
public:
    bool isPalindromic(string s) {
        string t = "";
        for (char c : s) {
            int a = c;
            string binary = bitset<8>(a).to_string();
            t += binary;
        }
        int l = 0;
        int r = t.size() - 1;
        while (l < r) {
            if (t[l] != t[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
