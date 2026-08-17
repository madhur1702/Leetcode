class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n = drones.size();
        int mini = INT_MAX,idx = -1;
        for(int i =0;i<n;i++)
        {
            int total = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);

            if(mini>total  && drones[i][2]>=total)
            {
                mini = total;
                idx = i;
            }
        }
        return idx;
    }
};
