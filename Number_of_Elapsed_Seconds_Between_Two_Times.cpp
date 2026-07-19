class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int a = startTime[0] - '0';
        int b = endTime[0] - '0';
        a = (a*10) + (startTime[1] - '0');
        b = (b*10) + (endTime[1] - '0');
        int c = startTime[3] - '0';
        int d = endTime[3] - '0';
        c = (c*10) + (startTime[4] - '0');
        d = (d*10) + (endTime[4] - '0');
        int e = startTime[6] - '0';
        int f = endTime[6] - '0';
        e = (e*10) + (startTime[7] - '0');
        f = (f*10) + (endTime[7] - '0');
        a = a*60*60;
        a = a + (c*60) + e;
        b = b*60*60;
        b = b + (d*60) + f;
        return b - a;
    }
};
