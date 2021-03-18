class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) 
    {
        int up = 1;
        int down = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] - nums[i-1] > 0)
            {
                up = down + 1;
            }
            else if(nums[i] - nums[i-1] < 0)
            {
                down = up + 1;
            }
            else
            {
                continue;
            }
        }
        return max(up,down);
    }
};
