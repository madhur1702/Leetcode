class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());
        int j = 0;
        double mini = 0;
        int n = prices.size(),m = discounts.size();
        for(int i = 0;i<n;i++)
        {
            if(j<m)
            {
                double p = (double)(prices[i]*(100-discounts[j]))/100;
                j++;
                mini += p;
            }else
            {
                mini += prices[i];
            }
        }
        return mini;
    }
};
