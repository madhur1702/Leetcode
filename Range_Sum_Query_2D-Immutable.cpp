class NumMatrix {
public:
vector<vector<long long>> mat;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i =0;i<n;i++)
        {
            vector<long long> level;
            long long sum = 0;
            for(int j =0;j<m;j++)
            {
                sum += matrix[i][j];
                level.push_back(sum);
            }
            mat.push_back(level);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        long long sum = 0;
        for(int i =row1;i<=row2;i++)
        {
            if(col1 == 0)
            {
                sum += mat[i][col2];
            }else{
                sum += (mat[i][col2] - mat[i][col1-1]);
            }
        }
        return (int)sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
