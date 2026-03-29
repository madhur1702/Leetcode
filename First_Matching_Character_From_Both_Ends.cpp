class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size();
        int i = 0,j = n - 1;
        int ind = -1;
        while(i<=j)
        {
            if(s[i] == s[j])
            {
                ind = i;
                break;
            }
            i++;
            j--;
        }
        return ind;
    }
};
