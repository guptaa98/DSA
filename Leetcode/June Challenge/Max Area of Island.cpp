class Solution {
public:
    int check_neighbors(vector<vector<int>>&matrix,int x,int y,int r,int c, int &a)
    {
        if(x<0 || x>=r || y<0 || y>=c || matrix[x][y] != 1 )
        {
            return a;
        }
        matrix[x][y] = 2;
        a++;
        check_neighbors(matrix,x+1,y,r,c,a);
        check_neighbors(matrix,x-1,y,r,c,a);
        check_neighbors(matrix,x,y+1,r,c,a);
        check_neighbors(matrix,x,y-1,r,c,a);
        return a;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int r = grid.size();
        if(r==0)
        {
            return 0;
        }
        int max_area = 0;
        int c = grid[0].size();
        for(int i = 0 ; i < r ; i++)
        {
            for(int j = 0 ; j < c ; j++)
            {
                if(grid[i][j] == 1)
                {
                    int area = 0;
                    area = check_neighbors(grid,i,j,r,c,area);
                    max_area = max(max_area , area);
                }
            }
        }
        return max_area;   
    }
};
