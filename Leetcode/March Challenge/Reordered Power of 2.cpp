class Solution {
public:
    bool reorderedPowerOf2(int N) 
    {
        if(N==1)
        {
            return true;
        }
        if(N==0)
        {
            return false;
        }
        long long int mx=1000000000;
        long long int tmp=1;
        
        string as=to_string(N);
        sort(as.begin(),as.end());
        
        while(tmp<=mx)
        {
            tmp=tmp*2;
            
            string str=to_string(tmp);
            sort(str.begin(),str.end());
            
            if(str==as)
            {
                return true;
            }
            if(as.size()<str.size())
            {
                break;
            }
        }
        return false;
    }
};
