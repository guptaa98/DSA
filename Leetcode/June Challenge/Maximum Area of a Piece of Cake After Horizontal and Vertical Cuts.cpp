class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) 
    {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int hmax = 0 , vmax = 0;
        
        vmax = long(max(w - verticalCuts.back(), verticalCuts[0])) ;
        hmax = long(max(horizontalCuts[0], h - horizontalCuts.back()));
        
        
        for(int i = 1; i < horizontalCuts.size(); i++)
        {
            hmax = long(max(hmax , horizontalCuts[i] - horizontalCuts[i-1]));
        }
        for(int i = 1; i < verticalCuts.size(); i++)
        {
            vmax = long (max(vmax , verticalCuts[i] - verticalCuts[i-1])) ;
        }
        return int((long) hmax * vmax % 1000000007);
    }
};
