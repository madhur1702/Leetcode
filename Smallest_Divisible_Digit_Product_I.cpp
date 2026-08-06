class Solution {
public:
int product(int n,int t)
{
    int ans = 1;
    while(n)
    {
        ans *= (n%10);
        n = n/10;
    }
    return ans%t;
}
    int smallestNumber(int n, int t) {
        while(product(n,t)!=0)
        {
            n++;
        }
        return n;
    }
};
