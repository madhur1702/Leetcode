class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> map;
        for (auto& row : grid) {
            for (int num : row) {
                map[num]++;
            }
        }
        int missing, repeat;
        for (int i = 1; i <= n * n; i++) {
            if (!map.count(i)) {
                missing = i;
            } else if (map[i] == 2) {
                repeat = i;
            }
        }
        return {repeat, missing};
    }
};
