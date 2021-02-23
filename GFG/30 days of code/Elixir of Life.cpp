class Solution
{
    public:
    int maxFrequency(string S)
    {
        int k = 1;
        int n = S.size()-1;
        string ps;
    	for(int i = 0;i<S.size(); i++)
    	{
    	    if (S.substr(0,k) == S.substr(n-i,k))
    	    {
    	        ps = S.substr(0,k);
    	        break;
    	    }
    	    else
    	    {
    	        k++;
    	    }
    	}
    	int f = 0;
    	for(int i = 0;i<S.size(); i++)
    	{
    	    if(S.substr(i,ps.size()) == ps)
    	    {
    	        f++;
    	    }
    	}
    	return f;
    }
};
