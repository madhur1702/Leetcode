class Solution {
public:
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
    vector<int> closestPrimes(int left, int right) {
        vector<int> a;
        for (int i = left; i <= right; i++) {
            if(isPrime(i))
            {
               a.push_back(i); 
            }
        }
        if(a.size()<2)
        {
            return {-1,-1};
        }
        int mind = INT_MAX;
        int min1 = 0;
         for(int i=1;i<a.size();i++)
         {
            int d = a[i] - a[i-1];
            if(mind>d)
            {
                mind = d;
                min1 = i - 1;
            }
         }
         return {a[min1],a[min1+1]};
    }
};

