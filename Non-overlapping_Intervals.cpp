class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b)
        {
            return a[1]<b[1];
        });
        int cnt = 1;
        int lastendtime = intervals[0][1];
        for(int i = 1;i<intervals.size();i++)
        {
            if(intervals[i][0]>=lastendtime)
            {
                cnt++;
                lastendtime = intervals[i][1];
            }
        }
        return intervals.size() - cnt;
    }
};
