class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int red = 1;
        int blue = -1;
        int none = INT_MIN;
        
        int n = graph.size();
        int m;
        int color;
        int node;
        
        queue<int>q;
        vector<int>graphColor(n,none);
        
        for(int i=0;i<n;i++)
        {
            if (graphColor[i]!=none)
            {
                continue;
            }
            graphColor[i] = red;
            q.push(i);
            while(!q.empty())
            {
                node = q.front();
                q.pop();
                color = graphColor[node];
                int m = graph[node].size();
                for(int j=0;j<m;j++)
                {
                    if(graphColor[graph[node][j]]==color)
                        return false;
                    if(graphColor[graph[node][j]]==none)
                    {
                        graphColor[graph[node][j]] = -color;
                        q.push(graph[node][j]);
                    }
                }   
            }
        }
        return true;
    }
};
