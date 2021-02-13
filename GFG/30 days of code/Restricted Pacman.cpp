// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_set>
using namespace std; 

 // } Driver Code Ends


//User function Template for C++


class Solution{
    public:
    int candies(int m, int n) 
    { 
        int c = 0;
    	queue<int>can;
    	unordered_map<int,int>mp;
    	int fn = (m*n)-(m+n);
    	mp[fn]++;
    	can.push(fn);
    	c++;
    	while(!can.empty())
    	{
    	    if(can.front()-m > 0 && mp[can.front()-m]<1)
    	    {
    	       mp[can.front()-m]++;
    	       c++;
    	       can.push(can.front()-m);
    	   
    	    }
    	    if(can.front()-n > 0 && mp[can.front()-n]<1)
    	    {
    	        mp[can.front()-n]++;
    	        c++;
    	        can.push(can.front()-n);
    	    }
    	    can.pop();
    	    //cout<<endl<<can.size();
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
		int m,n;
		cin>>m>>n;
		Solution obj;
		cout << obj.candies(m,n)<<endl; 
	}
	return 0; 
} 



  // } Driver Code Ends
