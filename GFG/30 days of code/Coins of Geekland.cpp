// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int N,int K)
    {
        int ms = INT_MIN;
        vector<vector<int>> prefix(N, vector<int> (N, 0));
        prefix[0][0] = mat[0][0];
        for(int i=1;i<N;i++)
        {
            prefix[i][0] = prefix[i-1][0] + mat[i][0];
            prefix[0][i] = prefix[0][i-1] + mat[0][i];
        }
        for(int i=1; i<N; i++)
        {
            for(int j=1; j<N; j++)
            {
                prefix[i][j] = (mat[i][j]+prefix[i-1][j]+prefix[i][j-1])-prefix[i-1][j-1];
            }
        }
        for(int i=0; i<=N-K; i++)
        {
            for(int j=0; j<=N-K; j++)
            {
                if((j-1)>=0 && i == 0)
                {
                    ms = max(ms,prefix[i+K-1][j+K-1]-prefix[i+K-1][j-1]);
                }
                else if((i-1)>=0 && j == 0)
                {
                    ms = max(ms,prefix[i+K-1][j+K-1]-prefix[i-1][j+K-1]);
                }
                else if( (i-1) == 0 && (j-1) < 0)
                {
                    ms = max(ms,prefix[i+K-1][j+K-1]-prefix[i-1][j+K-1]);
                }
                else if((j-1)>=0 && (i-1)>=0)
                {
                    ms = max(ms,prefix[i+K-1][j+K-1]-prefix[i+K-1][j-1]-prefix[i-1][j+K-1]
                                +prefix[i-1][j-1]);
                }
                else
                {
                    ms = max(ms,prefix[i+K-1][j+K-1]);
                }
            }
        }
        return ms;
    }  
};


// { Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}
  // } Driver Code Ends
