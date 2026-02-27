class Solution {
public:
vector<int> generaterows(int row)
{
    int val = 1;
    vector<int> ans;
    ans.push_back(1);
    for(int col = 1;col<row;col++)
    {
        val = val * (row - col);
        val = val/col;
        ans.push_back(val);
    }
    return ans;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        for(int i= 1;i<=numRows;i++)
        {
            pascal.push_back(generaterows(i));
        }
        return pascal;
    }
};
