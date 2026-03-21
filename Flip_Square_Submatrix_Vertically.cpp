class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int lx = x+k-1;
        while(x<lx)
        {
            for(int i = y;i<y+k;i++)
            {
                swap(grid[x][i],grid[lx][i]);
            }
            x++;
            lx--;
        }
        return grid;
    }
};
