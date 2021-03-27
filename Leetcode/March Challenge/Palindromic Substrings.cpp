class Solution {
public:
    int countSubstrings(string s) 
    {
        int count = 0; 
        int dp[s.size()][s.size()];
        memset(dp,0,sizeof(dp));
         
        int len=1;
        //int start=0;
        for(int i=0;i<s.size()-1;i++)
        {
            dp[i][i] = 1;
            count++;
            if (s[i]==s[i+1]) 
            {
                count++;
                dp[i][i+1]=1; 
            }
        }
        dp[s.size()-1][s.size()-1]=1;
        count++;
        for(int j=2; j <= s.size()-1 ; j++)
        {
            for(int i=0; i < s.size()-j; i++)
            {  
                int st=i; //start point
                int ed = i+j;  //ending point 
                if(dp[st+1][ed-1]==1 && s[st]==s[ed]) 
                {
                    dp[st][ed]=1;
                    count++;
                 }        
             }
         }
         return count;
    }
};
