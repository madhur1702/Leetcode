class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> rem(k, 0);
        int n = arr.size();
        for (int i = 0; i < n; ++i) {
            int remainder = ((arr[i] % k) + k) % k; 
            rem[remainder]++;
        }
        for (int i = 1; i <= k / 2; ++i) {
            if (rem[i] != rem[k - i]) {
                return false;
            }
        }
        if (rem[0] % 2 != 0) {
            return false;
        }
        if (k % 2 == 0 && rem[k / 2] % 2 != 0) {
            return false;
        }

        return true;
    }
};
