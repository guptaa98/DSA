class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) 
    {
        /*create a 2d array dp[len(prices)][2].
        If we have a stock on a particular day(represented by 1), there are 2 possibilities.
        1. we buy a stock on that day.
        dp[i][1] = dp[i-1][1] - price[i] - fee
        2. we have a stock bought on previous day
        dp[i][1] = dp[i-1][1]
        
        If we don't have a stock on that day(represented by 0), there are 2 possibilities.
        1. we sold the stock on that day.
        dp[i][0] = dp[i-1][1] + price[i]
        2. we do nothing
        dp[i][0] = dp[i-1][0]
        */
        vector<vector<int>>dp(prices.size(), vector<int>(2,0));
        dp[0][0] = 0;
        dp[0][1] = -prices[0]-fee;
        for(int i = 1; i < prices.size(); i++)
        {
            dp[i][1] = max(dp[i-1][0]-prices[i]-fee , dp[i-1][1]);
            dp[i][0] = max(dp[i-1][1]+prices[i], dp[i-1][0]);
        }
        return dp[prices.size()-1][0];
    }
};
