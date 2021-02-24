class Solution {
public:
    int scoreOfParentheses(string S) 
    {
        stack <int> stk;
        for (int i = 0; i < S.size(); i++)
        {
            if(S[i]=='(')
            {
                stk.push(-1);
            }
            else if (S[i]==')')
            {
                if(stk.top() == -1)
                {
                    stk.pop();
                    stk.push(1);
                }
                else
                {
                    int curr = 0;
                    while(stk.top() != -1)
                    {
                        curr += stk.top();
                        stk.pop();
                    }
                    stk.pop();
                    stk.push(2*curr);
                }
            }
        }
        int ans = 0 ;
        while(!stk.empty())
        {
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};
