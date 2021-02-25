class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int mi = INT_MAX, maxi = 0;
        vector<int> nc;
        nc = nums;
        sort(nc.begin(), nc.end());
        if(nc == nums)
        {
            return 0;
        }
        for (int i = 0; i < nc.size(); i++)
        {
            if(nc[i] == nums[i])
            {
                continue;
            }
            if (nc[i] != nums[i])
            {
                mi = min(i,mi);
                maxi = max(i, maxi);
            }
        }
        return ((maxi-mi)+1);
    }
};
