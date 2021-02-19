
class Solution {
public:
    string minRemoveToMakeValid(string s) {
	
		// define a stack which holds the parantheses along with the position
        stack<pair<int, char> > stk;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(')
            {
			    // if opening braces, push into the stack
                stk.push(make_pair(i, '('));
            }
            else if(s[i] == ')')
            {
			    // If closing braces, check if opening present or not. If yes, pop it.
				// Else mark that position of closing brace with '1' in the string.
				// 1 suggest that it should get removed.
                if(stk.empty())
                {
                    s[i] = '1';
                }
                else
                {
                    stk.pop();
                }
            }
        }
		// Now check for any leftover opening braces in the stack.
		// Mark those position with '1'.
		// That is they should get removed.
        while(!stk.empty())
        {
            pair<int, char> TOP = stk.top();
            s[TOP.first] = '1';
            stk.pop();
        }
		// Now push all the characters in a string which aren't marked as '1'.
		string output = "";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != '1')
            {
                output.push_back(s[i]);
            }
        }
        return output;
    }
};
