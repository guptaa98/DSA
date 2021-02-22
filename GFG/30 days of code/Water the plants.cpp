class Solution{
    public:
    int min_sprinklers(int gallery[], int n)
    {
        int arr[n];
        memset(arr,-1,sizeof(arr));
        for(int i = 0; i<n; i++)
        {
            if (gallery[i] == 0)
            {
                arr[i] = max(i,arr[i]);
                continue;
            }
            if (gallery[i] != -1)
            {
                int e = i + gallery[i];
                int s = max(0, i - gallery[i]);
                for (int sprink = s; sprink <= min(n,e); sprink++)
                {
                    arr[sprink] = max(e, arr[sprink]);
                }
            }
        }
        int count = 0;
        int i = 0;
        while(i < n)
        {
            if(i==-1 || arr[i] == -1)
            {
                return -1;
            }
            count++;
            i = arr[i] +1;
        }
        return count;
    }
};
