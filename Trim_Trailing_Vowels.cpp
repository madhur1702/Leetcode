class Solution {
public:
    string trimTrailingVowels(string s) {
     int n = -1;
     for(int i = s.size()-1;i>=0;i--)
     {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            n = i+1;
            break;
        }
     }
     if(n == -1)
     {
        return "";
     }
     return s.substr(0,n);
    }
};
