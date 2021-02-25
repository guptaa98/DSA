class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
        sort(a, a + n);
        long long int pair = 0;
        int f = 0;
        int r = n-1;
        while (f < r)
        {
            if (a[f]+a[r] > 0)
            {
                pair += (r-f);
                r--;
            }
            else
            {
                f++;
            }
        }
        return pair;
    }   
};
