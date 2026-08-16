class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int time = 0;
        int m = requests.size();
        int prev = 0;
        for(int i =0;i<m;i++)
        {
            time += abs(prev - requests[i]);
            prev = requests[i];
        }
        return time;
    }
};
