class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<pair<int,int>>v;
        if(nums.size()==0)
        {
            return nums;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for (auto x:mp)
        {
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<int> result;
        for (auto x:v)
        {
            if(k > 0)
            {
                result.push_back(x.second);
            }
            k--;
        }
        return result;
    }
};
