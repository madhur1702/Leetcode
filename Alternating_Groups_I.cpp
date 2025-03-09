class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int count = 0;
        int n = colors.size();

        if ((colors[1] != colors[0]) && (colors[n - 1] != colors[0])) {
            count++;
        }
        for (int i = 1; i < n; i++) {
            int nextIndex = (i + 1) % n;
            if ((colors[i - 1] != colors[i]) &&
                (colors[nextIndex] != colors[i])) {
                count++;
            }
        }

        return count;
    }
};
