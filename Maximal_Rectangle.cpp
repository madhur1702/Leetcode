class Solution {
public:
int lhistogram(vector<int> arr)
{
    int n = arr.size();
    int maxArea = 0;
    stack<int> st;
    for(int i = 0;i<n;i++)
    {
        while(!st.empty() && arr[st.top()]>arr[i])
        {
            int nse = i;
            int el =  arr[st.top()];
            st.pop();
            int pse = st.empty()?-1:st.top();
            maxArea = max(maxArea,el*(nse-pse-1));
        }
        st.push(i);
    }
    while(!st.empty())
    {
        int nse = n;
        int el = arr[st.top()];
        st.pop();
        int pse = st.empty()?-1:st.top();
        maxArea = max(maxArea,el*(nse-pse-1));
    }
    return maxArea;
}
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> psum(n,vector<int>(m));
        int maxArea = 0;
        for(int j =0;j<m;j++)
        {
            int sum = 0;
            for(int i = 0;i<n;i++)
            {
                sum += matrix[i][j]-'0';
                if(matrix[i][j] == '0')
                {
                    sum = 0;
                }
                psum[i][j] = sum;
            }
        }
        for(int i = 0;i<n;i++)
        {
            maxArea = max(maxArea,lhistogram(psum[i]));
        }
        return maxArea;
    }
};
