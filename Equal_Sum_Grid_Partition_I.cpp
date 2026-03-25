class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long total = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                total += grid[i][j];
            }
        }
        if(total%2 == 1) return false;
        total /= 2;
        long long sum = 0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<m;j++)
            {
                sum += grid[i][j];
            }
            if(sum == total)
            {
                return true;
            }
        }
        sum = 0;
        for(int i=0;i<m-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum += grid[j][i];
            }
            if(sum == total) return true;
        }
        return false;
    }
};
