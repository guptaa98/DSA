class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        //sort(arr.begin(),arr.end());
        vector<pair<int,int>>mp;
        for(int i = 0; i < arr.size(); i++)
        {
            int diff = abs(arr[i]-x);
            mp.push_back(make_pair(diff,arr[i]));
        }
        sort(mp.begin(),mp.end());
        vector<int>output;
        for (int i = 0; i<k;i++)
        {
            output.push_back(mp[i].second);
        }
        sort(output.begin(),output.end());
        return output;
    }  
};
