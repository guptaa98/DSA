class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) 
    {
        if(envelopes.size() == 0)
        {
            return 0;
        }
        sort(envelopes.begin(), envelopes.end());
        
        vector <int> dp(envelopes.size()+1,1);
        int rd = 1;
        
        for(int i = 1; i < envelopes.size(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(envelopes[i][0] > envelopes[j][0] && envelopes[i][1] > envelopes[j][1] && 1 + dp[j] > dp[i])
                {
                    dp[i] = 1 + dp[j];
                    rd = max(dp[i],rd);
                }
            }
        }
        return rd;
    }
};

















