class Solution {
public:
    int minAddToMakeValid(string s) {
        int opening = 0,closing = 0;
        for(char c: s)
        {
            if(c == '(')
            {
                opening++;
            }else
            {
                if(opening>0)
                {
                    opening--;
                }else
                {
                    closing++;
                }
            }
        }
        return opening + closing; 
    }
};
