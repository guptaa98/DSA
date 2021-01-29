// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{

	public:
	int find_min(int a[], int n, int k) 
	{
	    int pairs = 0;
	    int max_pair_we = 0;
	    for (int i=0;i<n;i++)
	    {
	        pairs += (a[i]/2);
	        if(a[i]%2==0)
	        {
	           max_pair_we += ((a[i]/2)-1);
	        }
	        else
	        {
	           max_pair_we += (a[i]/2);
	        }
	    }
	    if(pairs<k)
	    {
	        return -1;
	    }
	    if(k > max_pair_we)
	    {
	       int nos = (2*max_pair_we);
	       nos += n;
	       return (nos + (k-max_pair_we));
	    }

	        if(k <= max_pair_we)
	        {
	            int ns = 2*(k-1);
	            return (ns+n+1);
	        }
        // Your code geos here
    }

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> k;
        Solution obj;
        cout << obj.find_min(a, n, k) << endl;
    }
    return 1;
}
  // } Driver Code Ends

