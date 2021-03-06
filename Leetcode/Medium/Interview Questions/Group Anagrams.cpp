class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> ana;
        
        if(strs.size() == 0 || strs.size() == 1)
        {
            ana.push_back(strs);
            return ana;
        }
        
        set<string> arstr;
        
        vector<string> tarr;
        vector<string> cstrs;
        cstrs = strs;
        for (auto &word : cstrs)
        {
            sort(word.begin(),word.end());
            arstr.insert(word);
            tarr.push_back(word);
        }
        for(auto &word : arstr)
        {
            vector<string> temp;
            for(int i = 0; i < tarr.size(); i++)
            {
                if(tarr[i] == word)
                {
                    temp.push_back(strs[i]);
                }
            }
            sort(temp.begin(),temp.end());
            ana.push_back(temp);
        }
        return ana;
    }
};
