class Solution {
public:
    int reverse(int x) {
        long long y = 0;
        int z = x;
        if(x == INT_MIN) return 0;
        if(x<0) x = -x;
        while(x>0)
        {
            int largest = x%10;
            y = y*10 + largest;
            x = x/10;
        }
        if(y>INT_MAX  || y<INT_MIN) return 0;
        if(z<0) return -y;
        return y;
    }
};
