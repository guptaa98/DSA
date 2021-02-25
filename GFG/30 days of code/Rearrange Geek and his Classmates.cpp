class Solution {
  public:
    void prank(long long a[], int n)
    {
        long long b[n];
        for(int i = 0; i < n; i++)
        {
            b[i] = a[a[i]]; 
        }
        for(int i = 0; i < n; i++)
        {
            a[i] = b[i];
        }
    }
};
