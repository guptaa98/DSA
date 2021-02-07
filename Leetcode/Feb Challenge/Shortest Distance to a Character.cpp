class Solution {
public:
    vector<int> shortestToChar(string s, char c) 
    {
        vector<int>answer;
        for(int i=0;i<s.size();i++)
        {
            int l = i-1; 
            int r = i+1;
            int index = 0;
            if(s[i]==c)
            {
                answer.push_back(0);
            }
            else if(i==0)
            {
                while(r<=s.size()-1)
                {
                    if(s[r]==c)
                    {
                        index = abs(r-i);
                        break;
                    }
                    r++;
                }
                answer.push_back(index);
                index = 0;
            }
            else if(i==s.size()-1)
            {
                while(l>=0)
                {
                    if(s[l]==c)
                    {
                        index = abs(l-i);
                        break;
                    }
                    l--;
                }
                answer.push_back(index);
                index=0;
            }
            else
            {
                while(r<=s.size()-1)
                {
                    if(s[r]==c)
                    {
                        index = abs(r-i);
                        break;
                    }
                    r++;
                }
                while(l>=0)
                {
                    if(s[l]==c)
                    {
                        if(index == 0)
                        {
                            index = abs(l-i);
                        }
                        else
                            index = min(index,abs(l-i));
                        break;
                    }
                    l--;
                }
                answer.push_back(index);
                index = 0;
            }
        }
        return answer;
    }
};
