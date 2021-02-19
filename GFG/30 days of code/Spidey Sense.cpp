// Walls and Gate type ques in leetcode.



class Solution
{
    public:
    void dfs(int i, int j, int count,vector<vector<int>>&spider)
    {
        if(i < 0 || i >= spider.size() || j < 0 || j >= spider[i].size() || spider[i][j] < count)
        {
            return;
        }
        spider[i][j] = count;
        
        dfs(i+1 , j , count+1 , spider);
        dfs(i-1 , j , count+1 , spider);
        dfs(i , j+1 , count+1 , spider);
        dfs(i , j-1 , count+1 , spider);
    }
    
    vector<vector<int>> findDistance(vector<vector<char> >& matrix, int M, int N) 
    { 
        vector<vector<int>>spider(M,vector<int>(N,0));
        
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size() ; j++)
            {
                if(matrix[i][j] == 'B')
                {
                    spider[i][j] = 0;
                }
                else if(matrix[i][j] == 'W')
                {
                    spider[i][j] = -1;
                }
                else 
                {
                    spider[i][j] = INT_MAX;
                }
            }
        }
        for(int i = 0; i<spider.size(); i++)
        {
            for(int j = 0; j < spider[i].size(); j++)
            {
                if(spider[i][j] == 0)
                {
                    dfs(i,j,0,spider);
                }
            }
        }
        for(int i = 0; i < spider.size(); i++)
        {
            for(int j = 0; j < spider[i].size(); j++)
            {
                if( spider[i][j] == INT_MAX)
                {
                    spider[i][j] = -1;
                }
            }
        }
        return spider;
    } 
};
