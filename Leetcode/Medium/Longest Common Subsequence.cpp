class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) 
    {
        int m = text1.size();
        int n = text2.size();
        int arr[m+1][n+1] ;
        for(int i = 0 ; i <= n ;i++)
        {
            arr[0][i] = 0;
        }
        for(int i = 0 ; i <= m;i++)
        {
            arr[i][0] = 0;
        }
        for (int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(text1[i-1] == text2[j-1])
                {
                    arr[i][j] = 1 + arr[i-1][j-1];
                }
                else
                {
                    arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
                }
            }
        }
        return arr[text1.size()][text2.size()];
    }
};
