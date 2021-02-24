class Solution
{
    public:
    int build_bridges(string str1, string str2)
    {
        int m = str1.size();
        int n = str2.size();
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
                if(str1[i-1] == str2[j-1])
                {
                    arr[i][j] = 1 + arr[i-1][j-1];
                }
                else
                {
                    arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
                }
            }
        }
        return arr[str1.size()][str2.size()];
    }
};
