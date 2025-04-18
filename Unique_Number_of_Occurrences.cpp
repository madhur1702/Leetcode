class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> hash;
        for (int i : arr) {
            hash[i]++;
        }
        unordered_set<int> self;
        for (auto it : hash) {
            if (self.count(it.second)) {
                return false;
            }
            self.insert(it.second);
        }
        return true;
    }
};
