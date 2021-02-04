class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        vector<int>s;
        vector<int>temp;
        temp = nums;
        sort(temp.begin(),temp.end());
        int i=0,j=1;
        while(j<temp.size())
        {
            if(temp[j]-temp[i]==0)
            {
                j++;
            }
            else if(temp[j]-temp[i]==1)
            {
                s.push_back((j-i)+1);
                j++;
            }
            else if(temp[j]-temp[i]>1)
            {
                while(temp[j]-temp[i] > 1)
                {
                    i++;
                }
            }
        }
        if(s.size()==0)
        {
            return 0;
        }
        sort(s.begin(),s.end());
        return s[s.size()-1];
    }
};
