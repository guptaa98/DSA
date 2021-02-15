class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        unordered_map<int,int>mp;
        vector<int>count;
        vector<int>ans;
        for(int i = 0;i<mat.size();i++)
        {
            sort(mat[i].begin(),mat[i].end(),greater<int>());
            int one = 0;
            for(int j=0;j < mat[i].size();j++)
            {
                if(mat[i][j] == 0)
                {
                    break;
                }
                one++;
            }
            mp[i] = one;
            count.push_back(one);
        }
        sort(count.begin(),count.end());
        int t = 0;
        while(k>0)
        {
            int c = count[t];
            for(int i = 0; i<mp.size();i++)
            {
                if(mp[i] == c)
                {
                    ans.push_back(i);
                    mp[i] = -1;
                    break;
                }
            }
            k--;
            t++;
        }
        return ans;
    }
};
