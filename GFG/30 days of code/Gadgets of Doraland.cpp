class Solution{
    public:
    vector<int>output;
    vector<int> TopK(vector<int>array, int k)
    {
        sort(array.begin(),array.end());
        vector<pair<int,int>>mp;
        int m;
        m = array[0];
        int count = 0;
        for(int i = 0; i <= array.size(); i++)
        {
            if(m == array[i])
            {
                count++;
            }
            else
            {
                mp.push_back(make_pair(count,m));
                count = 1;
                m = array[i];
            }
        }
        sort(mp.begin(),mp.end());
        
        for (int i = mp.size()-1; k>0; i--,k--)
        {
            output.push_back(mp[i].second);
        }
        return output;
    }
};
