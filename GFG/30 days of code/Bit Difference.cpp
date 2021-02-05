// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

class Solution{
    public:
    long long sumBitDiff(int arr[], int n) 
    { 
        int c = 0;
        for(int i=0; i<32; i++)
        {
            int count = 0;
            for(int j = 0; j<n; j++)
            {
                if( (arr[j] & (1<<i)) )
                {
                    count++;
                }
            }
            c += count * (n-count) * 2; 
        }
        return c;
    } 
};

// { Driver Code Starts.
  
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i = 0; i < n; i++)
    		cin >> arr[i];
    	Solution obj;
		cout << obj.sumBitDiff(arr, n) << "\n";
    }
	return 0; 
}
  // } Driver Code Ends
