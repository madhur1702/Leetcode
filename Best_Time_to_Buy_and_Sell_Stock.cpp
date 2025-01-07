class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyprice = prices[0];
        int profit = 0;
        for(int i = 1;i<prices.size();i++)
        {
            if(buyprice>prices[i])
            {
                buyprice = prices[i];
            }
            profit = max(profit,prices[i]-buyprice);
        }
        return profit;
    }
};
