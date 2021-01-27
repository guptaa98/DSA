// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++


class Solution{
	public:
    	long long findNth(long long N)
    {
        long long converter = 1;
        long long ans = 0;
        while(N>0)
        {
            long long m = N%9 ;
            ans = ans + (m*converter) ;
            converter *= 10;
            N /= 9;
        }
        return ans;
        // code here.
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}

  // } Driver Code Ends
