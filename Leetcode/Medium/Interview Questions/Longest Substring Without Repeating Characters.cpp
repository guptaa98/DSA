class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        if (s.size() == 0)
        {
            return 0;
        }
        if (s.size() == 1)
        {
           return 1; 
        }
        set<char>dc;
        for(int i = 0; i < s.size(); i++)
        {
            dc.insert(s[i]);
        }
        int c = dc.size();
        vector<int>l;
        for(int i = 0 ; i < s.size(); i++)
        {
            unordered_map <int,int> mp;
            mp[int(s[i])] = 1;
            for(int j = i+1; j < s.size(); j++)
            {
                if(mp[int(s[j])] == 1)
                {
                    l.push_back(mp.size());
                    break;
                }
                else
                {
                    mp[int(s[j])] = 1;
                    if(j == s.size()-1)
                    {
                        l.push_back(mp.size());
                    }
                }
            }
            if(mp.size() == c)
            {
                return mp.size();
            }
        }
        sort(l.begin(),l.end());
        return l[l.size()-1];
    }
};
