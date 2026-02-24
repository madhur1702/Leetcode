class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int suma =0,sumb = 0;
        for(int i : aliceSizes)
        {
            suma += i;
        }
        for(int i : bobSizes)
        {
         sumb += i;
        }
        int sd = suma - sumb;
        sd = sd/2;
        int i = 0,j = 0;
        sort(aliceSizes.begin(),aliceSizes.end());
        sort(bobSizes.begin(),bobSizes.end());
        while(i<aliceSizes.size() && j<bobSizes.size())
        {
            int diff = aliceSizes[i] - bobSizes[j];
            if(diff == sd)
            {
                return {aliceSizes[i],bobSizes[j]};
            }
            if(diff<sd)
            {
                i++;
            }else
            {
                j++;
            }
        }
        return {};
    }
};
