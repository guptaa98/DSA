class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        unordered_map<int,int>mp;
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]] = i;
        }
        int trees = 0;
        
        vector<long> dp(arr.size(), 1);
        
        for(int i = 1; i < arr.size(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(arr[i] % arr[j] == 0 && mp.find(arr[i] / arr[j]) != mp.end()) 
                {
                    dp[i] += (dp[j] * dp[mp[arr[i] / arr[j]]]) % 1000000007;
                }
            }
        }
        for(auto cnt : dp)
        {
            trees = (trees + cnt) % 1000000007;
        }
        return trees;
    }
};
