class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        while(k--)
        {
            for(int i = 0;i<n;i++)
            {
                for(int j = 0;j<grid[0].size();j++)
                {
                    swap(grid[i][j],grid[0][0]);
                }
            }
        }
        return grid;
    }
};
