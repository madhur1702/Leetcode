class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> mergedmap;
        for(auto &pair : nums1)
        {
            mergedmap[pair[0]] += pair[1];
        }
        for(auto &pair : nums2)
        {
            mergedmap[pair[0]] += pair[1];
        }
        vector<vector<int>> result;
        for(auto &entry : mergedmap)
        {
            result.push_back({entry.first,entry.second});
        }
        return result;
    }
};
