class Solution {
public:
    long long coloredCells(int n) {
        if(n<2)
        {
            return n;
        }
        long long sum = 1;
        for(int i=1;i<n;i++)
        {
            int k = i*4;
            sum += k;
        }
        return sum;
    }
};
