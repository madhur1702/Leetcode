class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(char c : s)
        {
            if(!st.empty() && !isalpha(c))
            {
                st.pop();
            }else if(isalpha(c))
            {
                st.push(c);
            }
        }
        string t = "";
        while(!st.empty())
        {
            t += st.top();
            st.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }
};
