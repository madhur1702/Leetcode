class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int b = INT_MAX,a = 0;
        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='W')
            {
                a++;
            }
        }
        b = a;
        for(int i=k;i<blocks.size();i++)
        {
            if(blocks[i]=='W')
            {
                a++;
            }
            if(blocks[i-k]=='W')
            {
                a--;
            }
            b = min(b,a);
        }
        return b;
    }
};
