class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum ^= derived[i];
        }
        if(sum == 0)
        {
            return true;
        }
        return false;
    }
};
