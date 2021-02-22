class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string ans;
        for (int i = 0; i < d.size(); i++) {
            int dIdx = 0;
            for (int sIdx = 0 ; sIdx < s.size() ; sIdx++) {
                if(dIdx < d[i].size() && s[sIdx] == d[i][dIdx])
                    dIdx ++;
            }
            
            if (dIdx == d[i].size())
                if((ans.size() < d[i].size() || (ans.size() == d[i].size() && ans > d[i])))
                    ans = d[i];
        }
        return ans;
    }
};
