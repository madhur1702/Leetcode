class Solution {
public:
void solve(int col,vector<string>& board,int &cnt,vector<int> &leftrow,vector<int> &lowerd,vector<int>&upperd,int n)
{
    if(col == n)
    {
        cnt++;
    }else
    {
        for(int row = 0;row<n;row++)
        {
            if(leftrow[row] == 0 && lowerd[row+col] == 0 && upperd[n-1+col-row] == 0)
            {
                board[row][col] = 'Q';
                leftrow[row] = 1;
                lowerd[row+col] = 1;
                upperd[n-1+col-row] = 1;
                solve(col+1,board,cnt,leftrow,lowerd,upperd,n);
                board[row][col] = '.';
                leftrow[row] = 0;
                lowerd[row+col] = 0;
                upperd[n-1+col-row] = 0;
            }
        }
    }
}
    int totalNQueens(int n) {
        vector<string> board(n);
        string s = "";
        for(int i = 0;i<n;i++)
        {
            s += '.';
        }
        vector<int> leftrow(n,0);
        vector<int> lowerd(2*n-1,0);
        vector<int> upperd(2*n-1,0);
        int cnt = 0;
        solve(0,board,cnt,leftrow,lowerd,upperd,n);
        return cnt;
    }
};
