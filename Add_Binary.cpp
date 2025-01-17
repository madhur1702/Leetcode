class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";
        int i  = a.size()-1;
        int j  = b.size()-1;
        int carry = 0;
        while(i>=0||j>=0||carry)
        {
            int total = carry;
            if(i>=0)
            {
                total += a[i--] - '0';
            }
             if(j>=0)
            {
                total += b[j--] - '0';
            }
            s += (total%2) + '0';
            carry = total/2;
        }
        reverse(s.begin(),s.end());
            return s;
    }
};
