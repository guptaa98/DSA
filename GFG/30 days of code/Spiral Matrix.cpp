// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
 
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // dir = 0 (ltr)
        // dir = 1 (ttb) dir = 2 (rtl) dir = 3 (btm)
        //cout<<a.size();
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = m-1;
        int dir = 0;
        while(top<=bottom && left<=right)
        {
            if(dir==0)
            {
                for(int i = left; i<=right; i++)
                {
                    k = k-1;
                    if(k==0)
                    {
                        return a[top][i];
                    }
                }

                top = top+1;
                //dir = 1;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    k = k-1;
                    if(k==0)
                    {
                        return a[i][right];
                    }
                }

                right = right-1;
                //dir = 2;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    k = k-1;
                    if(k==0)
                    {
                        return a[bottom][i];
                    }
                }

                bottom = bottom - 1;
                //dir = 3;
            }
            else if(dir == 3)
            {
                for(int i = bottom; i>=top;i--)
                {
                    k = k-1;
                    if(k==0)
                    {
                        return a[i][left];
                    }
                }
                left = left+1;
            }
            dir = (dir+1)%4;
        }
        return 0;
    }

};


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
            
    }
}  // } Driver Code Ends
