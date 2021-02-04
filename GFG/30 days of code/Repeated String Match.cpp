// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        int hasha[26]={0};
        int hashb[26]={0};
        for (int i=0;i<A.size();i++)
        {
            hasha[A[i]-97]++;
        }
        for (int i=0;i<B.size();i++)
        {
            hashb[B[i]-97]++;
        }
        int i = 0;
        while(i<26)
        {
            if(hashb[i]>0)
            {
                if(hasha[i]==0)
                {
                    return -1;
                }
            }
            i++;
        }
        int res=1;
        int count = B.length() / A.length();
        string str = A;
        for (int i = 0; i <= count+2; i++)
        {
            if (str.find(B) != string::npos)
            {
                return res;
            }
            else
            {
                str=str+A;
                res+=1;
            }
        }
        return -1;
    }
  
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends
