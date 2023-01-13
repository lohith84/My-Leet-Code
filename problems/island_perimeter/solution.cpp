class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r=grid.size();
        int cl=grid[0].size();
        int i,j,c=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<cl;j++)
            {
                if(grid[i][j]==1)
                {
                    c=c+4;
                    if(i-1>=0 and grid[i-1][j]==1)
                    {
                        c--;
                    }
                    if(i+1<r and grid[i+1][j]==1)
                    {
                        c--;
                    }
                    if(j-1>=0 and grid[i][j-1]==1)
                    {
                        c--;
                    }
                    if(j+1<cl and grid[i][j+1]==1)
                    {
                        c--;
                    }
                }
            }
        }
        return c;
    }
};