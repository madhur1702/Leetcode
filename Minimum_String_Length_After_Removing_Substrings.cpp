class Solution {
public:
    int minLength(string s) {
        stack<char> t;
        int cnt = 0;
        for(char c : s)
        {
            if(!t.empty() && ((t.top() == 'A' && c == 'B') || (t.top() == 'C' && c == 'D')))
            {
                t.pop();
            }else
            {
                t.push(c);
            }
        }
        while(!t.empty())
        {
            cnt++;
            t.pop();
        }
        return cnt;
    }
};
