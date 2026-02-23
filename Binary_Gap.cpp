class Solution {
public:
    int binaryGap(int n) {
        int curr = 0;
        int maxi = 0;
        int found = 0;
        while(n>0)
        {
            int bit = n%2;
            if(bit == 1)
            {
                if(found)
                {
                    maxi = max(maxi,curr);
                }
                curr = 1;
                found = 1;
            }else
            {
                if(found)
                {
                    curr++;
                }
            }
            n /= 2;
        }
        return maxi;
    }
};
