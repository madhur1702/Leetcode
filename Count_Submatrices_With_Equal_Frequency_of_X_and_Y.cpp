class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        vector<int> sumx(m,0),sumy(m,0);
        for(int i=0;i<n;i++)
        {
            int x = 0,y = 0;
            for(int j = 0;j<m;j++)
            {
                if(grid[i][j] == 'X')
                {
                    x++;
                }else if(grid[i][j] == 'Y')
                {
                    y++;
                }
                sumx[j] += x;
                sumy[j] += y;
                if(sumx[j]>0 && sumx[j] == sumy[j])
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
