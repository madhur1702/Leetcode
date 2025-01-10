class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
            if((n == 1)||(n == 7))
            {
                return true;
            }
            else if(n<10)
            {
                return false;
            }
            else
            {
                while(n>0)
                {
                    int a  = n%10;
                    sum += a*a;
                    n = n/10;
                }
            }
            return isHappy(sum);
    }
};
