// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    
    public:
    int RulingPair(vector<int> arr, int n) 
    { 
        if(n==1)
        {
            return -1;
        }
        long long int sum = -1;
        unordered_map<long long int,int> mp;
    	for(int i=0;i<n;i++)
    	{
    	    long long int sd = 0;
    	    int s = arr[i];
    	    while(s!=0)
    	    {
    	        int digit = s%10;
    	        sd+=digit;
    	        s /= 10;
    	    }
    	    if(!mp[sd])
    	    {
    	        mp[sd] = arr[i];    	    
           }
    	    else
    	    {
    	        if(arr[i]+mp[sd] > sum)
    	        {
    	            sum = arr[i]+mp[sd];
    	        }
    	        if(arr[i]>mp[sd])
    	        {
    	            mp[sd]=arr[i];
    	        }
    	    }
    	}
    	return sum;
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
		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
	    Solution obj;
		cout << obj.RulingPair(arr,n)<<"\n";
	}
	return 0; 
} 

  // } Driver Code Ends
