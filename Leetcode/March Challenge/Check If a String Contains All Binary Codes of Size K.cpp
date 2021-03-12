class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        if(k >= s.size())
        {
            return false;
        }
        set<string>ds;
        for(int i = 0; i <= s.size()-k; i++)
        {
            string p = s.substr(i,k);
            ds.insert(p);
            if(ds.size() >= pow(2,k))
            {
                return true;
            }
        }
        return false;
    }
};
