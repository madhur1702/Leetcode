class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> st;
        for(char c : sentence)
        {
            if(isalpha(c))
            {
                st.insert(tolower(c));
            }
        }
        return st.size() == 26;
    }
};
