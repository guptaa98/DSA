class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        for (int i = 0; i < nums.size() ;i++)
		{
		    int num = nums[i];
		    stack<int> stk;
		    for(int j = i+1; j < nums.size(); j++)
		    {
		        if(stk.empty() && nums[j] > num)
		        {
		            stk.push(nums[j]);
		        }
		        else if(!stk.empty() && nums[j] > stk.top()) 
		        {
		            return true;
		        }
		        else if(!stk.empty() && nums[j] < stk.top() && nums[j] > num)
		        {
                    
		            stk.pop();
		            stk.push(nums[j]);
		        }
		    }
        }
        return false;
    }
};
