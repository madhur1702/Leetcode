class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<int,vector<int>>> pq;
        for(int i =0;i<n;i++)
        {
            int dist = (points[i][0]*points[i][0]) + (points[i][1]*points[i][1]);
            pq.push({dist,points[i]});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<vector<int>> ans;
        for(int i = 0;i<k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
