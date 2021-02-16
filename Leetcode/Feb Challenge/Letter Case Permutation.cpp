class Solution {
public:
    vector<string> output;
    void backtrack(string s,int i)
    {
        if(i == s.size())
        {
            output.push_back(s);
            return;
        }
        if(isdigit(s[i]))
        {
            backtrack(s,i+1);
        }
        else
        {
            s[i] = tolower(s[i]);
            backtrack(s,i+1);
            s[i] = toupper(s[i]);
            backtrack(s,i+1);
        }
    }
    vector<string> letterCasePermutation(string S) 
    {
        backtrack(S,0);
        return output;
    }
};
