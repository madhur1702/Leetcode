class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num;
        int n = nums1.size();
        int k = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    num.push_back(nums1[i]);
                }
            }
        }
        sort(num.begin(),num.end());
        auto it  = unique(num.begin(),num.end());
        num.resize(distance(num.begin(),it));
        return num;
    }
};
