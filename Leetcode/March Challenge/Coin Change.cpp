class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        if(amount == 0)
        {
            return 0;
        }
        
        int dp[coins.size() + 1][amount + 1];
        
        
        for(int i = 0; i <= coins.size() ; i++)
        {
            for(int j = 0; j <= amount; j++)
            {
                if(j == 0)
                {
                    dp[i][j] = 0;
                }
                else if(i == 0)
                {
                    dp[i][j] = 100000;
                }
                else if(coins[i-1] > j)
                { 
                    dp[i][j] = dp[i-1][j];
                }
                else
                {
                    dp[i][j] = min(dp[i-1][j] , 1 + dp[i][j-coins[i-1]]);
                }
            }
        }
        if(dp[coins.size()][amount] >= 100000)
        {
            return -1;
        }
        return dp[coins.size()][amount]; 
    }
};
