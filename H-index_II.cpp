class Solution {
public:
    int hIndex(vector<int>& citations) {
        int low = 0;
        int high = citations.size()-1;
        int n = citations.size();
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(citations[mid]>= n - mid)
            {
                high = mid - 1;
            }else
            {
                low = mid + 1;
            }
        }
        return n - low;
    }
};
