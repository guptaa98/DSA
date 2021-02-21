class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        vector<int>ppos;
        vector<int>tpos;
        for(int i = 0; i < n; i++)
        {
            if(arr[i]=='P')
            {
                ppos.push_back(i);
            }
            if(arr[i]=='T')
            {
                tpos.push_back(i);
            }
        }
        int output = 0;
        int l = 0, r = 0;
        while(l < ppos.size() && r < tpos.size())
        {
            if(abs(ppos[l] - tpos[r]) <= k)
            {
                output++;
                l++;
                r++;
            }
            else if (ppos[l] < tpos[r])
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        return output;
    }
};
