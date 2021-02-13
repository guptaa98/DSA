class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        queue<pair<int,int>>q;
        if (grid[0][0] == 1 || grid[grid.size()-1][grid[0].size()-1]==1)
        {
            return -1;
        }
        int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
        int dy[8] = { 0, 1, 0, -1, -1, -1, 1, 1 };
        q.push(make_pair(0,0));
        grid[0][0] = 1;
        while(!q.empty())
        {
            int i =  q.front().first;
            int j = q.front().second;
            q.pop();
            if(i==grid.size()-1 && j==grid[0].size()-1)
            {
                return grid[i][j];
            }
            for(int dir = 0; dir<8 ; dir++)
            {
                int nx = i + dx[dir];
                int ny = j + dy[dir];
                if(nx>=0 && nx<grid.size() && ny>=0 && ny<grid[0].size() && grid[nx][ny] == 0)
                {
                    grid[nx][ny]= grid[i][j] + 1;
                    q.push(make_pair(nx,ny));
                }
            }
            
        }
        return -1;
    }
};
