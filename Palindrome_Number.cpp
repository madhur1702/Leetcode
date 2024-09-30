class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        int no = x;
        if (x < 0) {
            return false;
        }

        while (x > 0) {
            rev = (rev * 10) + (x%10);
            x = x / 10;
        }

        return no == rev;
    }
};
