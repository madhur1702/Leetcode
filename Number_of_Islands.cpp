class Solution {
public:
void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int,int>> q;
    q.push({row,col});
    vis[row][col] = 1;
    vector<int> dx = {-1,0,1,0};
    vector<int> dy = {0,1,0,-1};
    while(!q.empty())
    {
        int row1 = q.front().first;
        int col1 = q.front().second;
        q.pop();

        for(int i = 0;i<4;i++)
        {
            int delrow = row1 + dx[i];
            int delcol = col1 + dy[i];
            if(delrow>=0 && delrow<n && delcol>=0 && delcol<m && !vis[delrow][delcol] && grid[delrow][delcol] == '1')
            {
                vis[delrow][delcol] = 1;
                q.push({delrow,delcol});
            }
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt = 0;
        for(int i =0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j] == '1')
                {
                    cnt++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return cnt;
    }
};
