class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string t = "",temp = "";
        for(char c : s)
        {
            if(c == '(')
            {
                st.push(c);
            }else if(!st.empty())
            {
                if(c != ')')
                {
                    st.push(c);
                }else
                {
                    while(st.top() != '(')
                    {
                        temp += st.top();
                        st.pop();
                    }
                    st.pop();
                    if(st.empty())
                    {
                        t += temp;
                        temp = "";
                    }else
                    {
                        for(char u : temp)
                        {
                            st.push(u);
                        }
                        temp = "";
                    }
                }
            }else
            {
                t += c;
            }
        }
        return t;
    }
};
