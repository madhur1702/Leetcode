class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n = capacity.size();
        int mini = -1,minival = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(capacity[i]>=itemSize)
            {
                int a = capacity[i] - itemSize;
                if(minival>a)
                {
                    minival = a;
                    mini  = i;
                }
            }
        }
        return mini;
    }
};
