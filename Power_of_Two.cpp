class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0; pow(2,i) <= n; i++) {
            if (n == pow(2, i)) {
                return true;
            }
        }
        return false;
    }
};
