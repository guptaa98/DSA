class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        if(nums.size()==0)
        {
            return 0;
        }
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int vsum = accumulate(nums.begin(),nums.end(),0);
        return (sum - vsum);
    }
};
