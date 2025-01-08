class Solution {
public:
    bool isPalindrome(string s) {
        string str, st;
        int size = s.size();
        if (size > 0 && isdigit(s[0])&&(size<=2)) {
            return false;
        }
        for (int i = size - 1; i >= 0; i--) {
            if (isalnum(s[i])) {
                str.push_back(tolower(s[i])); 
            }
        }

        for (int i = 0; i < size; i++) {
            if (isalnum(s[i])) {
                st.push_back(tolower(s[i]));
            }
        }
        return str == st;
    }
};
