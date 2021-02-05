class Solution {
public:
    string simplifyPath(string path) 
    {
        stack<string>stk;                
        if(path[path.size()-1]!='/')
        {
            path += "/"; 
        }            
        int i=1; 
        string ans="";
        string temp="";
        
        while(i<path.size())
        {    
            if(path[i]=='/')
            {   
                if(temp=="" || temp==".")
                {
                     // ignore
                }
                else if(temp=="..")
                {
                    if(!stk.empty()) 
                    {
                        stk.pop();
                    }
                }
                else
                {
                    stk.push(temp); //push the directory or file name to stack
                }
                temp=""; // reset temp
            }
            else
            {
                temp.push_back(path[i]); // else append to temp
            }
            i++; // increment index
        }
        while(!stk.empty())
        { 
            ans = "/"+stk.top()+ans;
            stk.pop();
        }
        if(ans.size()==0) // if no directory or file is present
            ans="/"; // minimum root directory must be present in ans
        
        return ans;
    }
};
