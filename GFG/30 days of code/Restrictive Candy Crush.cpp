// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





class Solution{
    public:
    string Reduced_String(int k,string s)
    {
        if(k==1)
        {
            s = "";
            return s;
        }
        stack<pair<char,int>>stk; 
        for(int i=0;i<s.size();i++)
        {
            if(stk.empty())
            {
                stk.push(make_pair(s[i],1));
            }
            else
            {
                if(stk.top().first == s[i])
                {
                    int count = stk.top().second+1;
                    stk.push(make_pair(s[i],count));
                    if(count == k)
                    {
                        while(count)
                        {
                            stk.pop();
                            count--;
                        }
                    }
                }
                else
                {
                    stk.push(make_pair(s[i],1));
                }
            }
        }
        s = "";
        while(!stk.empty())
        {
            s = stk.top().first+s;
            stk.pop();
        }
        return s;
    }
};


// { Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}  // } Driver Code Ends
