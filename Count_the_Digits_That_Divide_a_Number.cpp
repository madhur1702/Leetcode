class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int copy = num;
        while(num>0)
        {
            int last = num%10;
            if(copy%last==0)
            {
                count++;
            }
            num =num/10;
        }
        return count;
    }
};
