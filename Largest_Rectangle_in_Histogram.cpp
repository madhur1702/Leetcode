class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxArea = 0;
        int nse,el,pse;
        for(int i = 0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>heights[i])
            {
                nse = i;
                el = heights[st.top()];
                st.pop();
                pse = st.empty()?-1:st.top();
                maxArea = max(maxArea,el*(nse - pse - 1));
            }
            st.push(i);
        }
        while(!st.empty())
        {
            nse = n;
            el = heights[st.top()];
            st.pop();
            pse = st.empty()?-1:st.top();
            maxArea = max(maxArea,el*(nse-pse-1));
        }
        return maxArea;
    }
};
