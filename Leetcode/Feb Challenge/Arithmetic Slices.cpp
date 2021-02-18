class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) 
    {
        if(A.size() < 3 )
        {
            return 0;
        }
        int c = 0;
        for(int i = 0; i<=A.size()-3; i++)
        {
            int as = 1;
            int d =  A[i+1] - A[i];
            for(int j = i+1; j<A.size(); j++)
            {
                if(A[j] == A[j-1] + d)
                {
                    as++;
                }
                else if(A[j] != A[j-1]+d ) 
                {
                    break;
                }
                if(as >= 3)
                {
                    c++;
                }
            }
        }
        return c;
    }
};
