class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size()!=t.size())
        {
            return false;
        }
        int str1[26]={0},str2[26]={0};
        for(int i=0;i<s.size();i++)
        {
            str1[s[i]-'a']++;
            str2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(str1[i]!=str2[i])
            {
                return false;
            }
        }
        return true;
    }
};
