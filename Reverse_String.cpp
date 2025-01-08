class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int size = s.size();
        vector<char> str(size);
        int j=size-1;
        for(int i = 0;i<size;i++)
        {
            str[j]=s[i];
            j--;
        }
        for(int i = 0;i<size;i++)
        {
            s[i]=str[i];
        }
    }
};
