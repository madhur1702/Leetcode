class Solution {
public:
    int alternateDigitSum(int n) {
        int a = n;
        int count = (int)(log10(a)+1);
        int total = 0;
            while(n>0)
            {
                int last = n%10;
                if(count%2!=0)
                {
                    last = last*(1);
                    count--;
                }
                else if(count%2==0)
                {
                    last = last * (-1);
                    count--;
                }
                total = total+last; 
                n =n/10;
            }
            return total;
    }
};
